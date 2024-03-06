#include "Fraction.h"

Fraction::Fraction(int32_t num,uint32_t denom){
  _num = num;
  _denom = denom;
}
Fraction::Fraction(double realFract){
    _num = realFract/10;
    _denom = 10;
   
}

unsigned int NOD(unsigned int a, unsigned int b) {
  if (a == b) return a;
  if (a > b) return NOD(a-b, b);
  return NOD(a, b-a);
}

void Fraction::Reduce(){
    int nod = NOD(_num,_denom);
    _num /= nod;
    _denom /= nod;
}

void Fraction::Print(){
  std::cout<< _num << "/" << _denom << std::endl;
}