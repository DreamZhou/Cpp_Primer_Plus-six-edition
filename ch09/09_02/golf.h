#ifndef GOLF_H
#define GOLF_H
#include <string>

struct golf
{
  std::string fullname;
  int handicap;
};
void setgolf(golf & g, std::string name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);

#endif // GOLF_H
