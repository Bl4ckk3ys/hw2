#include "Fraction.h"
#include <string.h> 

Fraction::Fraction(int32_t num,uint32_t denom){
  _num = num;
  _denom = denom;
}
Fraction::Fraction(double realFract){
    _num = realFract/10;
    _denom = 10;
   
}
void after_point(unsigned int a){
  int zero_count = 0, overall_count = 0;
  while(zero_count < 5){
    a*=10;
    overall_count++;
    if(a % 10 == 0) zero_count++;
    else zero_count = 0;
  }
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