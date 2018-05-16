#include <map>
#include <algorithm>
#include "functionTable.h"
#include "node.h"
#include "TableManager.h"


const Node* FunctionTable::getValue(const std::string& name) const {
  auto itr = functions.begin();
  for( ; itr != functions.end(); ++itr ){
  	if(itr->first.fn_name == name)
  		return itr->second;
  }
  if ( itr == functions.end() ) throw name+std::string("not found");
  return nullptr;
}

void FunctionTable::setValue(const std::string& name, const Node* suite, std::vector<std::string> str_params) { 
	  Function f = Function(name, TableManager::getInstance().getScope(), str_params);
	  functions[f] = suite;
}

bool FunctionTable::checkName(const std::string& name) const{
	auto itr = functions.begin();
  	for( ; itr != functions.end(); ++itr ){
  		if(itr->first.fn_name == name)
  			return true;
  	}
  	return false;
}

const std::vector<std::string> FunctionTable::getParams(std::string name)const { 
	auto itr = functions.begin();
    for(; itr != functions.end(); ++itr){
		if(itr->first.fn_name == name){
			return itr->first.getParameters();;
		}	
	}
	throw std::string("Couldn't find the parameters for this fn");
}
