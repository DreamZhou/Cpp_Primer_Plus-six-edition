#include "mmove.h"
#include <iostream>

void Mmove::showmovel() const
{
    std::cout << "x = " << x << "  y = " << y << std::endl;
}

Mmove Mmove::add(const Mmove &m) const
{
    return Mmove(x + m.x, y + m.y);
}

void Mmove::reset()
{
    x = 0;
    y = 0;
}
