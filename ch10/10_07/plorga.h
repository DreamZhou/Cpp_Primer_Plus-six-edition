#ifndef PLORGA_H
#define PLORGA_H
#include <string>

class Plorga
{
private:
    std::string name;
    int ci;

public:
    Plorga (std::string nm = "Plorga", int c = 50) :name(nm),ci(c) {}
    void editci(int c);
    std::string getname() const ;
    int getci() const;

};

#endif // PLORGA_H
