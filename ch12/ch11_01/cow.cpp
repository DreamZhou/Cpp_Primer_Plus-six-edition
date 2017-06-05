#include "cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}



Cow::Cow(const char *nm, const char *ho, double wt):weight(wt)
{
    size_t len = strlen(nm);
    if (len <20){
     strcpy(name,nm);
    }
    else{
        strncpy(name,nm,19);
        name[19] = '\0';
    }
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby,ho);
}

Cow::Cow(const Cow &c):weight(c.weight)
{
    strcpy ( name,c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby,c.hobby);
}

Cow &Cow::operator=(const Cow &c)
{
    if (this == &c)
        return *this;
    strcpy ( name,c.name);
    delete hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow () const   //display all cow data
{
    std::cout << "name  " << name << std::endl
              << "hobby " << hobby << std::endl
              << "weight" << weight << std::endl;

}

Cow::~Cow()
{
    delete hobby;
}


