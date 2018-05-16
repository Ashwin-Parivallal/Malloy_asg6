#ifndef FUNCTIONTABLE__H
#define FUNCTIONTABLE__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class Node;


class Function{
public:
	friend class FunctionTable;
	Function(std::string fn_name, int scope, std::vector<std::string> str_params):fn_name(fn_name), scope(scope), parameters(str_params) {  }
	bool operator<(const Function& rhs) const{
		return fn_name < rhs.fn_name;
	}
  std::vector<std::string> getParameters()const { return parameters; }
private:
	std::string fn_name;
	int scope;
	std::vector<std::string> parameters;
};

class FunctionTable {
public:
  FunctionTable() : functions() { }
  bool checkName(const std::string& name)const;
  void setValue(const std::string& name, const Node* suite, std::vector<std::string>);
  const Node* getValue(const std::string& name)const;
  void display()const;
  int get_size(){return functions.size();}
  const std::vector<std::string> getParams(std::string name)const;
private:
  std::map<Function, const Node*> functions;//here we map a function object to a suite
};

#endif
