#include "person.h"
#include <cstring>
//#include <string>
Person::Person(const std::string ln, const char *fn)
{
    lname = ln;
    strcpy(fname,fn);
}

void Person::FormalShow() const
{
    std::cout << "first name: " << fname << std::endl;
    std::cout << "last name: " << lname << std::endl;
}

void Person::Show() const
{
    std::cout << "Name: " <<  fname  << " " << lname << std::endl;
}
