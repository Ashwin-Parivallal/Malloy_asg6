#include "node.h"
#include "poolOfNodes.h"
#include<cmath>
class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual bool isTrue()const = 0;

  virtual const Literal* operator==(const Literal& rhs) const = 0;
  virtual const Literal* eqEqual(float) const =0;
  virtual const Literal* eqEqual(int) const =0;

  virtual const Literal* operator>=(const Literal& rhs) const = 0;
  virtual const Literal* grEqual(float) const =0;
  virtual const Literal* grEqual(int) const =0;

  virtual const Literal* operator<=(const Literal& rhs) const = 0;
  virtual const Literal* lsEqual(float) const =0;
  virtual const Literal* lsEqual(int) const =0;

  virtual const Literal* operator<(const Literal& rhs) const = 0;
  virtual const Literal* less(float) const =0;
  virtual const Literal* less(int) const =0;

  virtual const Literal* operator>(const Literal& rhs) const = 0;
  virtual const Literal* greater(float) const =0;
  virtual const Literal* greater(int) const =0;

  virtual const Literal* operator!=(const Literal& rhs) const = 0;
  virtual const Literal* ntEqual(float) const =0;
  virtual const Literal* ntEqual(int) const =0;


  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opMod(float) const =0;
  virtual const Literal* opMod(int) const =0;

  virtual const Literal* operator^(const Literal& rhs) const =0;
  virtual const Literal* opPow(float) const =0;
  virtual const Literal* opPow(int) const =0;

  virtual const Literal* operator-() const =0;

  virtual const Literal* intdiv(const Literal& rhs) const = 0;
  virtual const Literal* opIntegerdiv(int lhs) const = 0;
  virtual const Literal* opIntegerdiv(float lhs) const = 0;


  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
};

class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  virtual const Literal* operator==(const Literal& rhs) const  {
    return rhs.eqEqual(val);
  }

  virtual const Literal* eqEqual(float lhs) const  {
    const Literal* node = new FloatLiteral((lhs == val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* eqEqual(int lhs) const  {
    const Literal* node = new FloatLiteral((float(lhs) == val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>=(const Literal& rhs) const {
	return rhs.grEqual(val);
  }
  virtual const Literal* grEqual(float lhs) const {
	const Literal* node = new FloatLiteral((lhs >= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  virtual const Literal* grEqual(int lhs) const{
	const Literal* node = new FloatLiteral((float(lhs) >= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<=(const Literal& rhs) const {
	return rhs.lsEqual(val);
  }
  virtual const Literal* lsEqual(float lhs) const {
	const Literal* node = new FloatLiteral((lhs <= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* lsEqual(int lhs) const {
	const Literal* node = new FloatLiteral((float(lhs) <= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  virtual const Literal* operator<(const Literal& rhs) const {
	return rhs.less(val);
  }
  virtual const Literal* less(float lhs) const {
	const Literal* node = new FloatLiteral((lhs < val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* less(int lhs) const {
	const Literal* node = new FloatLiteral((float(lhs) < val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>(const Literal& rhs) const {
	return rhs.greater(val);
  }
  virtual const Literal* greater(float lhs) const {
	const Literal* node = new FloatLiteral((lhs > val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  virtual const Literal* greater(int lhs) const{
	const Literal* node = new FloatLiteral((float(lhs) > val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator!=(const Literal& rhs) const {
	return rhs.ntEqual(val);
  }
  virtual const Literal* ntEqual(float lhs) const {
	const Literal* node = new FloatLiteral((lhs != val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  virtual const Literal* ntEqual(int lhs) const{
	const Literal* node = new FloatLiteral((float(lhs) != val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }


  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPow(int lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-() const {
    const Literal* node = new FloatLiteral(-val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
	
  virtual const Literal* intdiv(const Literal& rhs) const{
    return rhs.opIntegerdiv(val);
  }

  virtual const Literal* opIntegerdiv(int lhs) const  {
    const Literal* node = new FloatLiteral(floor((float)lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
    virtual const Literal* opIntegerdiv(float lhs) const  {
    const Literal* node = new FloatLiteral(floor((float)lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual bool isTrue()const { return val; }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    std::cout << val << std::endl; 
  }
private:
  float val;
};

class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) { }

  virtual const Literal* operator==(const Literal& rhs) const  {
    return rhs.eqEqual(val);
  }
  virtual const Literal* eqEqual(float lhs) const  {
    const Literal* node = new IntLiteral((lhs==float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* eqEqual(int lhs) const  { 
    const Literal* node = new IntLiteral((lhs==val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>=(const Literal& rhs) const {
	return rhs.grEqual(val);
  }
  virtual const Literal* grEqual(float lhs) const {
	const Literal* node = new IntLiteral((lhs >= float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* grEqual(int lhs) const{
	const Literal* node = new IntLiteral((lhs >= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* operator<=(const Literal& rhs) const {
	return rhs.lsEqual(val);
  }

  virtual const Literal* lsEqual(float lhs) const {
	const Literal* node = new IntLiteral((lhs <= float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* lsEqual(int lhs) const{
	const Literal* node = new IntLiteral((lhs <= val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* operator<(const Literal& rhs) const {
	return rhs.less(val);
  }

  virtual const Literal* less(float lhs) const {
	const Literal* node = new IntLiteral((lhs < float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* less(int lhs) const{
	const Literal* node = new IntLiteral((lhs < val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* operator>(const Literal& rhs) const {
	return rhs.greater(val);
  }
  virtual const Literal* greater(float lhs) const {
	const Literal* node = new IntLiteral((lhs > float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* greater(int lhs) const{
	const Literal* node = new IntLiteral((lhs > val)?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual const Literal* operator!=(const Literal& rhs) const {
	return rhs.ntEqual(val);
  }
  virtual const Literal* ntEqual(float lhs) const {
	const Literal* node = new IntLiteral((lhs != float(val))?1:0);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* ntEqual(int lhs) const{
	const Literal* node = new IntLiteral((lhs != val)?1:0); 
    PoolOfNodes::getInstance().add(node);
    return node; 
  }



  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }

  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor((float)lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }



  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs,val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
	int res;
	if(lhs<0 || val<0){
		res = (lhs%val)+val;
	}
	else	res = lhs%val;
    const Literal* node = new IntLiteral(res);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPow(int lhs) const  {
    const Literal* node = new IntLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-() const {
    const Literal* node = new IntLiteral(-val);
    PoolOfNodes::getInstance().add(node);
    return node;		
 }

  virtual const Literal* intdiv(const Literal& rhs) const	{
    return rhs.opIntegerdiv(val);
  }

  virtual const Literal* opIntegerdiv(int lhs) const  {
    const Literal* node = new FloatLiteral(floor((float)lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
    virtual const Literal* opIntegerdiv(float lhs) const  {
    const Literal* node = new FloatLiteral(floor((float)lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node; 
  }

  virtual bool isTrue()const { return val; }
  int getValue(){ return val; }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << val << std::endl; 
  }
private:
  int val;
};

