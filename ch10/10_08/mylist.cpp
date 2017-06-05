#include "mylist.h"
#include <iostream>


void Mylist::additem(Item & it)
{
    if(size == ListSize){
        std::cout << "Mylist already full!" ;
    }
     else{
        mylist[size] = it ;
        ++size;
    }
}
bool Mylist::isempty()
{
     return size == 0;
}
bool Mylist::isfull()
{
    return size == ListSize;
    }

int Mylist::getsize()
    {
      return size ;
    }

void Mylist::vist(void (*pf)(Item & it ))
{
    for (int i = 0 ; i < size ; ++i){
        std::cout <<"***** " << i+1 << " ******" << std::endl;
        (*pf)(mylist[i]);
    }
}

void Mylist::writefile(std::ostream &os, std::string (*pn)(Item &),int (*ps)(Item &))
{
    for(int i = 0 ; i <size ; ++i){
        os << (*pn)(mylist[i]) << "    # "
                <<  (*ps)(mylist[i]) << std::endl;
    }
}

void showinfo(Item & it)
{
    std::cout << "*****************\n" ;
    std::cout << "Name  : " << it.name
               << "scores: " << it.scores << std::endl;
}




std::__cxx11::string printname(Item &it)
{
     return it.name;
    }

int printscore(Item &it)
{
      return it.scores;
}
