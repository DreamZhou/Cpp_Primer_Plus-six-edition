#include "vector.h"
#include <cmath>
using std::cout;
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;

namespace VECTOR {

//compute degree in one radian
const double Rad_to_deg = 45 / atan(1.0);

//private methods
void Vector::set_mag()
{
    mag = sqrt( x * x + y * y);
}

void Vector::set_ang()
{
    ang = atan2(y,x);
}

void Vector::set_x()
{
    x =  mag * cos(ang);
}

void Vector::set_y()
{
    y = mag * sin(ang);
}

Vector::Vector(double n1, double n2, Vector::Mode form)
{
    mode = form;
    if ( mode == RECT){
        x = n1;
        y = n2;
        set_mag();
        set_ang();
    }else if (mode == POL) {
        mag = n1;
        ang = n2 / Rad_to_deg;
        set_x();
        set_y();
    }else {
        cout << "Incorrect 3rd argument to Ventor() --";
        cout << "ventor set to 0 \n";
        x = y = mag = ang = 0.0 ;
        mode = RECT ;

    }

}

void Vector::reset(double n1, double n2, Vector::Mode form)
{
    mode = form;
    if ( mode == RECT){
        x = n1;
        y = n2;
        set_mag();
        set_ang();
    }else if (mode == POL) {
        mag = n1;
        ang = n2 / Rad_to_deg;
        set_x();
        set_y();
    }else {
        cout << "Incorrect 3rd argument to Ventor() --";
        cout << "ventor set to 0 \n";
        x = y = mag = ang = 0.0 ;
        mode = RECT ;

    }

}

Vector::~Vector()
{

}

void Vector::polar_mode()
{
    mode = POL ;

}

void Vector::rect_mode()
{
    mode = RECT ;
}

Vector Vector::operator+(const Vector &vtor) const
{
    return Vector(x + vtor.x, y + vtor.y) ;
}

Vector Vector::operator-(const Vector &vtor) const
{
    return Vector(x - vtor.x, x - vtor.x);
}

Vector Vector::operator*(double n) const
{
    return Vector(x * n , y * n);
}

Vector Vector::operator-() const
{
    return Vector(-x, -y);
}

Vector operator *(double n, const Vector &vtor)
{
    return Vector( vtor.x * n, vtor.y * n);
}

std::ostream &operator<<(std::ostream &os, const Vector &vtor)
{
    if (vtor.mode == Vector::RECT ){
        os << "(x,y) = (" << vtor.x <<"," << vtor.y <<  ")";
    }else if (vtor.mode == Vector::POL) {
        os << "(m,a) = (" << vtor.mag << "," << vtor.ang * Rad_to_deg<< ")";
    }else {
        os << "Vector object mode is invalid";
    }
    return os;
}


} //end namespace VECTOR
