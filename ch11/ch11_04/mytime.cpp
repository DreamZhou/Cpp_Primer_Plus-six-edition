#include "mytime.h"

void MyTime::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60 ;
    minutes = minutes % 60;
}

MyTime operator+(const MyTime & mt , const MyTime & t)
{   MyTime sum;
     sum.minutes =mt.minutes+ t.minutes;
     sum.hours = mt.hours + t.hours + sum.minutes / 60;
     sum.minutes = sum.minutes % 60;
     return sum ;
}

MyTime operator-(const MyTime & mt , const MyTime & t)
{
    MyTime diff;
    int tot1 = t.minutes + 60 * t.hours ;
    int tot2 = mt.minutes + 60 * mt.hours;
    diff.minutes = (tot2 - tot1) % 60 ;
    diff.hours = (tot2 - tot1) / 60 ;
    return diff;
}

MyTime operator*(const MyTime & t,double n)
{
    MyTime result;
    long totalminutes = t.hours * n * 60 + t.minutes * n ;
    result.minutes = totalminutes % 60 ;
    result.hours = totalminutes / 60 ;
    return result;
}

std::ostream & operator<<(std::ostream &os, const MyTime &t)
{
    os << t.hours << " Hours " << t.minutes << " Minutes "  ;
    return os;
}
