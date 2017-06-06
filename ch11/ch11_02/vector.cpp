#include "vector.h"
#include <cmath>
using std::cout;
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;

namespace VECTOR {
const double Rad_to_deg = 45 / atan(45) ;
Vector::Vector(double n1, double n2, Vector::Mode form)
{
    mode = form;
    if ( mode == RECT){
        x = n1;
        y = n2;
    }else if (mode == POL) {
         x = n1 * cos(n2/Rad_to_deg);
         y = n1 * sin(n2/Rad_to_deg);
    }else {
        cout << "Incorrect 3rd argument to Ventor() --";
        cout << "ventor set to 0 \n";
        x = y = 0.0 ;
        mode = RECT ;

    }
}

void Vector::reset(double n1, double n2, Vector::Mode form)
{
    mode = form;
    if ( mode == RECT){
        x = n1;
        y = n2;
    }else if (mode == POL) {
        x = n1 * cos(n2/Rad_to_deg);
        y = n1 * sin(n2/Rad_to_deg);
    }else {
        cout << "Incorrect 3rd argument to Ventor() --";
        cout << "ventor set to 0 \n";
        x = y = 0.0 ;
        mode = RECT ;

    }
}

Vector::~Vector()
{

}
double Vector::magval() const
{
    return sqrt(x * x + y * y) ;
}
double Vector::angval() const
{
    return atan2(y, x) * Rad_to_deg ;
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
        os << "(m,a) = (" << sqrt(vtor.x * vtor.x + vtor.y * vtor.y) << ","
           << atan2(vtor.y, vtor.x) * Rad_to_deg<< ")";
    }else {
        os << "Vector object mode is invalid";
    }
    return os;
}


} //end namespace VECTOR
