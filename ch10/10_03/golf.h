#ifndef GOLF_H
#define GOLF_H
#include <string>
#include<iostream>
class Golf
{
private:
    std::string fullname;
    int handicap;
public:

    Golf() = default ;
    Golf(std::string fn,int hp): fullname(fn),handicap(hp)
    {}
    void showgolf();
    ~Golf()
    {
        std::cout << "destruct " << fullname << std::endl;
    }

};
Golf  setgolf();

#endif // GOLF_H
