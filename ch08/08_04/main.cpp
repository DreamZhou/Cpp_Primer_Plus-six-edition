#include <iostream>
#include<cstring>

struct stringy
{
    char* str;
    int ct;
};

void set(stringy & stry, const char *chars);
void show(const stringy &stry, size_t t = 1);
void show(const char *chars, const size_t t = 1);
int main()
{

    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show ("Done!");

    return 0;
}

void set(stringy & stry,const char* chars)
{
    char * newchars = new char[strlen(chars)+1];
    strcpy(newchars,chars);
    stry.str = newchars;
    stry.ct = strlen(newchars);
}
void show(const stringy & stry,size_t t)
{
    for (size_t i = 0; i < t; ++i){
        std::cout << "str = " << stry.str << std::endl
                  << "ct  = " << stry.ct << std::endl;
    }
}
void show(const char * chars, const size_t t)
{
    for (size_t i =0; i < t; ++i)
    {
        std::cout << chars << std::endl;
    }
}

// 应该好好读题！！！！
