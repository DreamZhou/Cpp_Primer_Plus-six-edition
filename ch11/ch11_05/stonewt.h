#ifndef STONEWT_H
#define STONEWT_H
#include <iostream>

class Stonewt
{
public:
   enum Mode {STONE,INTPND,FLOATPND};
private:
    enum {Lbs_per_stn = 14} ;
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt(double lbs, Mode form = FLOATPND);
    Stonewt (int stn, double lbs, Mode form = FLOATPND);
    Stonewt() : stone(0),pds_left(0),pounds(0),mode(FLOATPND) {}
    ~Stonewt() {}
    void setintpnd();
    void setstone();
    void setfloatpnd();
    void setmode(Mode form= FLOATPND);
    Stonewt operator+(const Stonewt & wt) const ;
    Stonewt operator-(const Stonewt & wt) const ;
    Stonewt operator*(double n) const;
    friend std::ostream & operator<<(std::ostream & os ,const Stonewt & st);
};

#endif // STONEWT_H
