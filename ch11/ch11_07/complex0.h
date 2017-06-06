#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H
#include <iostream>

class complex
{
private:
double real;
double imaginary;
public:
    complex():real(0),imaginary(0){}
    complex(double rl,double im):real(rl),imaginary(im){}
    complex operator+(const complex & a);
    complex operator-(const complex & a);
    complex operator*(const complex & a);
    complex operator*(double b);
    complex operator~()const ;

    friend complex operator*(double b, const complex & a);
    friend std::ostream & operator<<(std::ostream & os,const complex & a);
    friend std::istream & operator>>(std::istream & in, complex & a);

};

#endif // MYCOMPLEX_H
