#include <iostream>
#include <cstdint>

class Fraction{
private:
    int32_t _num; 
    uint32_t _denom;
    void Reduce();
    
public:
    Fraction(double realFract);
    Fraction(int32_t num,uint32_t denom);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& tmp){ 
        os << tmp._num << "/" << tmp._denom << std::endl;
    }
};


