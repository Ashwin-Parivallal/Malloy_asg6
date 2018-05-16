#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>
#include "literal.h"
#include "node.h"
#include<climits>

extern void yyerror(const char*);
extern void yyerror(const char*, const char);


class returnNode: public Node {
public:
	returnNode(const Node* expr, int retVal = INT_MIN): Node(), expr(expr), retVal(retVal){ }
	const Literal* eval() const;
	returnNode(const returnNode&) = delete;
	returnNode& operator=(const returnNode&) = delete;
private:
	const Node* expr;
	int retVal;
};


class ifNode: public Node{
public:
	ifNode(const Node* n, const Node* ts, const Node* es = nullptr): test(n), thenSuite(ts), elseSuite(es){ }
	virtual const Literal* eval()const ;
	ifNode(const ifNode&) = delete;
	ifNode& operator=(const ifNode&) = delete;
protected:
	const Node* test;
	const Node* thenSuite;
	const Node* elseSuite;
};

class CallNode: public Node{
public:
	CallNode(const std::string name, std::vector<Node*> params): Node(), name(name), parameters(params){}
	virtual ~CallNode() { }
	virtual const Literal* eval()const;
private:
	std::string name;
	std::vector<Node*> parameters;
};

class FuncNode: public Node{
public:
	FuncNode(std::string fn_name, Node* suite, std::vector<Node*> params);
	FuncNode(const FuncNode&) = delete;
	FuncNode& operator=(const FuncNode&) = delete;	
	virtual const Literal* eval() const;
private:
	std::string fn_name;
	Node* suite;
	std::vector<Node*> parameters;
	std::vector<std::string> str_params;
};


class SuiteNode : public Node {
public:
	SuiteNode( const std::vector<Node*> v ) : Node(), stmts(v) {	}
	virtual ~SuiteNode() { 	}
	virtual const Literal* eval() const;
private:
	std::vector<Node*> stmts;
};

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { } 
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
};

class printNode: public Node{
public:
	printNode(Node* expr): Node(), expr(expr) {  }
	virtual const Literal* eval() const;
	printNode(const printNode&) = delete;
	printNode& operator=(const printNode&) = delete;
private:
	Node* expr;
};

class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};

class UnaryNode : public Node {
public:
  UnaryNode(Node* val) : Node(), value(val) {}
  virtual const Literal* eval() const = 0;
  Node* getValue()  const { return value; }
  UnaryNode(const UnaryNode&) = delete;
  UnaryNode& operator=(const UnaryNode&) = delete;
protected:
  Node *value;
};


class compNode : public BinaryNode {
public:
	compNode(Node* left, Node* right, int opr):BinaryNode(left, right), comp_opr(opr){}
	virtual const Literal* eval() const;
private:
	int comp_opr;
};



class PlusEqualsBinaryNode : public BinaryNode {
public:
  PlusEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class MinusEqualsBinaryNode : public BinaryNode {
public:
  MinusEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class StarEqualsBinaryNode : public BinaryNode {
public:
  StarEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class DivEqualsBinaryNode : public BinaryNode {
public:
  DivEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class IntdivEqualsBinaryNode : public BinaryNode {
public:
  IntdivEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class PowEqualsBinaryNode : public BinaryNode {
public:
  PowEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};



class ModEqualsBinaryNode : public BinaryNode {
public:
  ModEqualsBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};



class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class ModBinaryNode : public BinaryNode {
public:
  ModBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PowBinaryNode : public BinaryNode {
public:
  PowBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class IntdivBinaryNode : public BinaryNode {
public:
  IntdivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};


class MinusUnaryNode : public UnaryNode{
public:
  MinusUnaryNode(Node* val): UnaryNode(val) {  }
  virtual const Literal* eval() const;
};

class PlusUnaryNode : public UnaryNode{
public:
  PlusUnaryNode(Node* val): UnaryNode(val) {  }
  virtual const Literal* eval() const;
};

