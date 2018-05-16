#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H


#include <iostream>
#include <string>
#include <map>
#include "symbolTable.h"
#include "functionTable.h"
//#include "ast.h"

class Literal;
class Node;

class TableManager{
public:
	static TableManager& getInstance();
	const Literal* getNode(const std::string& name)const;
	const Node* getSuite(const std::string& name)const;
	void insert(const std::string& name, const Node* node, std::vector<std::string>);
	void insert(const std::string& name, const Literal* val);
	bool checkName(const std::string& name)const;
	bool checkFunc(const std::string& name) const; 
	int getScope(){ return currentScope; }
	std::vector<SymbolTable> getTables(){ return tables; }
	std::vector<FunctionTable> getFunctions(){ return functions; }
	bool getReturn()const{ return Return; }
	void setReturn(bool k){ Return = k; }	
	void redScope(){currentScope--;}

	void getCurrFunScope()const{  }

	void pushScope(){currentScope++; }
	void popScope(){
		if( currentScope == (int)(functions.size()-1) )	functions.pop_back();
		if(currentScope == (int)(tables.size()-1))	tables.pop_back();
		currentScope--;
	}

	int checkName(std::string& name);
	void setParams(std::string fn_name, std::vector<Node*> params);
private:
	bool Return;
	int currentScope;
	std::vector<SymbolTable> tables;
	std::vector<FunctionTable> functions;

	TableManager(): Return(false), currentScope(0), tables(), functions(){ 
		tables.push_back(SymbolTable());
		functions.push_back(FunctionTable());
	}
};

#endif
