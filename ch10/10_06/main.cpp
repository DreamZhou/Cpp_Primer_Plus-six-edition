#include <iostream>
#include <mmove.h>


int main()

{   Mmove a(65, 64);
    a.showmovel();
    Mmove b(a);
    b.showmovel();
    Mmove c = a.add(b);
    c.showmovel();
    b.reset();
    b.showmovel();
    std::cout << "Hello World!" << std::endl;
    return 0;
}
