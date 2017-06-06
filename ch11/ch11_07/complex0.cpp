#include "complex0.h"

complex complex::operator+(const complex & a)
{
    return complex(real+a.real,imaginary+a.imaginary);
}
complex complex::operator-(const complex & a)
{
    return complex(real - a.real,imaginary - a.imaginary);
}
complex complex::operator*(const complex & a)
{
    return complex((real*a.real-imaginary*a.imaginary) ,real*a.imaginary+imaginary*a.real);
}
complex complex::operator*(double b)
{
    return complex(real * b, imaginary * b);
}
complex complex::operator~()const
{
    return complex(real,-imaginary);
}

//friend method
complex operator*(double b,const complex & a)
{
    return complex(a.real * b, a.imaginary*b);
}
 std::ostream & operator<<(std::ostream & os,const complex & a)
{
    os << "("  << a.real << "," << a.imaginary << "i)";
    return os;
}
 std::istream & operator>>(std::istream & in, complex & a)
 {
     std::cout << "real: ";
     if( in >> a.real){
        std::cout << "imaginary: ";
        in >> a.imaginary;
     }
     return in;
 }
