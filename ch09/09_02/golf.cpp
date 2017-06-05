#include "golf.h"
#include <iostream>
void setgolf(golf & g, std::string name, int hc)
{
    g.fullname = name;
    g.handicap = hc;
}
int setgolf(golf & g)
{
  int flag;
  std::string nm;
  std::cout << "Enter name of golfer: ";
  std::getline(std::cin,nm);
  if(nm != ""){
      flag =1;
  }else {
      flag = 0;
      return flag;
  }
  g.fullname = nm;
  std::cout << "Enter handicap of golfer: ";
  std::cin >> g.handicap;
  while (std::cin.get() != '\n') {
      continue;
  }
  return flag;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf & g)
{
    std::cout << "Name of golfer: " << g.fullname <<std::endl
              << "Handicap of golfer: " << g.handicap << std::endl;

}
