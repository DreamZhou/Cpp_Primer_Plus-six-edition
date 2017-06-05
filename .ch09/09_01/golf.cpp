#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}
int setgolf(golf & g)
{
  int flag;
  char nm[Len];
  std::cout << "Enter name of golfer: ";
  std::cin.getline(nm,Len);
  if(strcmp(nm,"") !=0 ){
      flag =1;
  }else {
      flag = 0;
      return flag;
  }
  strcpy(g.fullname,nm);
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
