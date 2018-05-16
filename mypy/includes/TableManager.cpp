#include <map>
#include <algorithm>
#include "TableManager.h"
#include "literal.h"
#include "node.h"



TableManager& TableManager::getInstance() {
  static TableManager instance;
  return instance;
}

const Literal* TableManager::getNode(const std::string& name) const {
  auto tab = tables[currentScope];
  
  const Literal* val = tab.getValue(name);
  if ( val == nullptr ) throw name+std::string(" not found");
  return val;
}


const Node* TableManager::getSuite(const std::string& name) const {  
	int cur_scope = currentScope;
	while(cur_scope > -1){ 
		if((int)(functions.size()-1) >= cur_scope && functions[cur_scope].checkName(name)){
			
			FunctionTable fun = functions[cur_scope];
			const Node* no = fun.getValue(name); 
			return no;
		}
		cur_scope--;
	}	
	throw std::string("Couldn't find the function");
}

void TableManager::insert(const std::string& name, const Node* suite, std::vector<std::string> str_params){ 
	if( currentScope > (int)(functions.size()-1) ){
		while(currentScope > (int)(functions.size())){
			functions.push_back(FunctionTable());
		} 
			
		FunctionTable f;
		f.setValue(name, suite, str_params);
		functions.push_back(f);
	}
	else{ 
		functions[currentScope].setValue(name, suite, str_params);
	}
}

void TableManager::insert(const std::string& name, const Literal* val){
	if( currentScope > (int)(tables.size()-1)){
		while(currentScope > (int)(tables.size())){
			tables.push_back(SymbolTable());
		} 
		SymbolTable s;
		s.setValue(name , val);
		tables.push_back(s);
	}
	else{ 
		tables[currentScope].setValue(name, val);
	}
}


void TableManager::setParams(std::string fn_name, std::vector<Node*> params){

	int scope = checkName(fn_name);
	if(scope != -1){
		std::vector<std::string> fn_vars = functions[scope].getParams(fn_name);
		if(fn_vars.size() != params.size()) throw std::string("Two vectors are not of equal size");
		for(unsigned i = 0; i < fn_vars.size(); i++){
			if(params[i]){ 
				const Literal* value = params[i]->eval();
				insert(fn_vars[i], value);
			}
		}
	}


}

int TableManager::checkName(std::string& name){ 
	for(unsigned i = 0; i < functions.size(); i++){
		if(functions[i].checkName(name))	return i;
	}
	return -1;
}







