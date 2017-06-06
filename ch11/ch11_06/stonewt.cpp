#include "stonewt.h"

Stonewt::Stonewt(double lbs ,Mode form)
{
    stone = (int)lbs / Lbs_per_stn ;
    pds_left = lbs - stone * Lbs_per_stn ;
    pounds = lbs ;
    mode = form;
}

Stonewt::Stonewt(int stn, double lbs, Mode form  )
{
    stone = stn ;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs ;
    mode = form ;
}
void Stonewt::setintpnd()
{
    mode = INTPND ;
}
void Stonewt::setstone()
{
    mode = STONE;
}
void Stonewt::setfloatpnd()
{
    mode = FLOATPND ;
}
void Stonewt::setmode(Mode form)
{
    mode = form;
}
Stonewt Stonewt::operator+(const Stonewt & wt) const
{
    return Stonewt(pounds + wt.pounds) ;
}

Stonewt Stonewt::operator-(const Stonewt & wt) const
{
    return Stonewt(pounds - wt.pounds) ;
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n) ;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::STONE){
        os << st.stone <<" stones " << st.pds_left << " pounds";
    }
    else if (st.mode == Stonewt::INTPND) {
        os << int(st.pounds )<< " pounds";
    }
    else if (st.mode == Stonewt::FLOATPND) {
        os << st.pounds << " pounds";
    }
    else {
        os << "Wrong Mode !" ;
    }
    return os ;
}

