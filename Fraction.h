#include <iostream>
#include <cstdint>

class Fraction{
private:
    int32_t _num; 
    uint32_t _denom;
public:

    Fraction(double realFract);
    Fraction(int32_t num,uint32_t denom);
    void Reduce();
    void  Print();
};


