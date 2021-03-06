#ifndef SYMBOLTABLE__H
#define SYMBOLTABLE__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class Literal;


class SymbolTable {
public:
  SymbolTable() : table() {}
  void     setValue(const std::string& name, const Literal* val);
  const Literal* getValue(const std::string& name) const;
  std::map<std::string, const Literal*> getTable()const{ return table; }
  int getsize(){return table.size();}
  bool checkName(std::string name)const;
private:
  std::map<std::string, const Literal*> table;
};

#endif
