#include <iostream>
#include "plorga.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Plorga  pl;
    cout << pl.getname()  << " " << pl.getci() << std::endl;
    pl.editci(150);
    cout << pl.getname() << "  " << pl.getci()  << std::endl;
    Plorga pa("Dream", 1);
    cout << pa.getname() << " " << pa.getci() << endl;
    return 0;
}
