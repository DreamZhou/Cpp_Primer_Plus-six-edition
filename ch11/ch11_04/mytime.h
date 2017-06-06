#ifndef MYTIMES_H
#define MYTIMES_H
#include <iostream>

class MyTime
{
private:
    int hours;
    int minutes;
public:
    MyTime() : hours(0), minutes(0) {}
    MyTime(int h, int m = 0) : hours(h), minutes(m) {}
    void AddMin(int m);
    void AddHr(int h) {hours += h ;}
    void Reset(int h = 0, int m = 0) {hours = h, minutes = m;}
    friend MyTime operator+(const MyTime & mt , const MyTime & t) ;
    friend MyTime operator-(const MyTime & mt , const MyTime & t) ;
    friend MyTime operator*(const MyTime & mt ,double n) ;
    friend MyTime operator*(double n, const MyTime & t)
        {return t * n;}
    friend std::ostream & operator<<(std::ostream & os, const MyTime & t);
};

#endif // MYTIMES_H
