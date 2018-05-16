#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"
#include "TableManager.h"
#include "functionTable.h"

class TableManager;
PoolOfNodes& pool2 = PoolOfNodes::getInstance();

const Literal* compNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res1 = left->eval();
  const Literal* res = right->eval();
  switch(comp_opr){
	case 1: return(*res1 < *res);
	case 2: return(*res1 > *res);
	case 3: return(*res1 == *res);
	case 4: return(*res1 >= *res);
	case 5: return(*res1 <= *res);
	case 6: return(*res1 != *res);
  }
  return res;
}


const Literal* ifNode::eval()const{
	TableManager& tm = TableManager::getInstance();
	const Literal* result = nullptr;
	const Literal* lit = test->eval();
	lit = dynamic_cast<const Literal*>(lit);
	if(!lit) throw std::string("Could not evaluate the test in ifNode");

	if(lit->eval()->isTrue()){ 
		if(!thenSuite) throw std::string("thenSuite is null");
		tm.pushScope();
		result = thenSuite->eval();
		tm.redScope();
	}
	else if(!(lit->eval()->isTrue())){
		if(!elseSuite)	return nullptr;
		tm.pushScope();	
		result = elseSuite->eval();	
		tm.redScope();
	}
	
	else throw std::string("Neither true nor false!!");
	return result;
}

const Literal* returnNode::eval()const {
	if(expr)	{ 
		const Literal* res = expr->eval();
		TableManager::getInstance().setReturn(true);
		return res;	
	}
	else {
		TableManager::getInstance().setReturn(true);
		const Literal* waster = new IntLiteral(0);
		pool2.add(waster);
		return waster;
	}
}

const Literal* CallNode::eval() const { 
	TableManager& tm = TableManager::getInstance();
	tm.pushScope();
	tm.setParams(name, parameters); 
	const Literal* li = tm.getSuite(name)->eval(); 
	tm.popScope(); 
	return li;
}


FuncNode::FuncNode(std::string fn_name, Node* suite, std::vector<Node*> params): Node(), fn_name(fn_name), suite(suite), parameters(params), str_params(){

	for(unsigned i = 0; i < parameters.size(); i++)
		str_params.push_back(reinterpret_cast<IdentNode*>(parameters[i])->getIdent());
}

const Literal* FuncNode::eval() const { 
	TableManager::getInstance().insert(fn_name, suite, str_params);
	return nullptr;
}

const Literal* SuiteNode::eval() const {

	TableManager& tm = TableManager::getInstance();
	const Literal* resul = nullptr;
	for( const Node* x : stmts ) {
		if( tm.getReturn() == true ){
			if(tm.getScope() != (int)(tm.getFunctions().size()-1)){ 				
				if(resul) return resul;
			}
			else tm.setReturn(false);
		}
		if(x){
			resul = x->eval();
		}
	}
	if (resul) { 
		return resul;
	}
	return nullptr;
}

const Literal* IdentNode::eval() const { 
  TableManager& tm = TableManager::getInstance();
  //std::cout << "IN identnode eval()" << std::endl;
  int current_scope = tm.getScope();
  for ( ; current_scope > -1; current_scope--){ 
	if((int)(tm.getTables().size()-1) >= current_scope){
  		if(tm.getTables()[current_scope].checkName(ident)){ 
			const Literal* val = TableManager::getInstance().getTables()[current_scope].getValue(ident); 
			return val;  	
		}
    }
  }
  throw std::string("IDENT NOT FOUND");
}

const Literal* printNode::eval() const {
	if( !expr ) throw std::string("error"); 
	const Literal* res = expr->eval(); 
	if( res ) res->print();
	return nullptr;
}

PlusEqualsBinaryNode::PlusEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, *res + *res1);
  }

const Literal* PlusEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);
  return res;
}


MinusEqualsBinaryNode::MinusEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, *res-*res1);
}

const Literal* MinusEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
}
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);
  return res;
}

StarEqualsBinaryNode::StarEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, *res * *res1);
}

const Literal* StarEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);
  return res;
}

DivEqualsBinaryNode::DivEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager& tm = TableManager::getInstance();
  int current_scope = TableManager::getInstance().getScope();
  tm.getTables()[current_scope].setValue(n, *res / *res1);

}

const Literal* DivEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);

  return res;
}

IntdivEqualsBinaryNode::IntdivEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, *res / *res1);
}

const Literal* IntdivEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);
  return res;
}


ModEqualsBinaryNode::ModEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, *res % *res1);

}

const Literal* ModEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);
  return res;
}

PowEqualsBinaryNode::PowEqualsBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const Literal* res1 = left->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, *res ^ *res1);
}

const Literal* PowEqualsBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  int current_scope = TableManager::getInstance().getScope();
  TableManager::getInstance().getTables()[current_scope].setValue(n, res);

  return res;
}





AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) {
  //const Literal* res = right->eval();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //TableManager::getInstance().insert(n, res);
}

const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, res); 
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
 // std::cout << "Evaluating left" << std::endl;
  const Literal* x = left->eval();
 // std::cout << "Evaluating right" << std::endl;
  const Literal* y = right->eval();
  return (*x+*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) { 
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}


const Literal* ModBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x) % (*y));
}

const Literal* PowBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x) ^ (*y));
}

const Literal* IntdivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).intdiv(*y));
}


const Literal* MinusUnaryNode::eval() const { 
  if (!value) {
    throw "error";
  }
  const Literal* x = value->eval();
  return (-(*x));
}


const Literal* PlusUnaryNode::eval() const { 
  if (!value) {
    throw "error";
  }
  const Literal* x = value->eval();
  return (x);
}

