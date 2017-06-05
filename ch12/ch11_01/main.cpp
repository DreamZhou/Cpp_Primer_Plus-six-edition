#include "cow.h"
#include <iostream>

using namespace std;

int main()
{
    Cow a;
    a.ShowCow();
    Cow b("Hahaha","beautiful",120);
    b.ShowCow();
    Cow c(b);
    c.ShowCow();
    a = c;
    a.ShowCow();
    cout << "Bye!";

    return 0;
}
