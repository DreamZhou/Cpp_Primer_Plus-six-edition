#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

namespace VECTOR {

    class Vector
    {
    public:
        // RECT for rectangular,POL for Polar modes
        enum Mode {RECT,POL};
    private:
        double x;
        double y;
        double mag;   //
        double ang;
        Mode mode;
    // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector():x(0),y(0),mag(0),ang(0),mode(RECT) {}
        Vector(double n1, double n2, Mode form = RECT);
        void reset (double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {return mag;}
        double angval() const {return ang;}
        void polar_mode();
        void rect_mode();
    // oprator overloading
        Vector operator+(const Vector & vtor) const;
        Vector operator-(const Vector & vtor) const;
        Vector operator*(double n) const;
        Vector operator-() const;
     //friends
        friend Vector operator *(double n, const Vector & vtor);
        friend std::ostream & operator<<(std::ostream & os, const Vector & vtor);

    };

} // end namespace VECTOR


#endif // VECTOR_H
