#ifndef MYLIST_H
#define MYLIST_H
#include <string>
#include <iostream>
const int ListSize = 20;
struct Student
{
   std::string name;
   int scores;
};
typedef Student Item;

class Mylist
{
private:
    Item mylist[ListSize];
    int size;

public:
    Mylist(int sz = 0): size(sz){}
    void additem(Item &);
    bool isempty();
    bool isfull();
    int getsize();
    void vist(void (*pf)(Item & it));
    void writefile(std::ostream &os, std::string (*pn)(Item &),int (*ps)(Item &));

};

void showinfo(Item &it);
std::string printname(Item & it);
int printscore(Item &it);
void str_tim(std::string & s); //删除尾部空白字符 （isspace）
#endif // MYLIST_H

