#include "golf.h"


 void Golf::showgolf()
{
    std::cout << "Name of golfer: " << fullname <<std::endl
              << "Handicap of golfer: " << handicap << std::endl;
}

 Golf  setgolf()
 {   std::string fn;
     int hp;
     std::cout << "Enter name of golfer: ";
     std::getline(std::cin, fn);
     std::cout <<  "Enter handicap of golfer: ";
     std::cin >> hp;
     while (std::cin.get() != '\n') {
         continue;
     }
     return Golf(fn,hp);
 }
