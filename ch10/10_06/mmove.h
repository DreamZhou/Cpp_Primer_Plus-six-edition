#ifndef MMOVE_H
#define MMOVE_H


class Mmove
{
private:
    double x;
    double y;
public:
    Mmove(double a = 0, double b = 0): x(a), y(b) {}
    void showmovel() const ;
    Mmove add(const Mmove & m) const;
    void reset () ;
};

#endif // MMOVE_H
