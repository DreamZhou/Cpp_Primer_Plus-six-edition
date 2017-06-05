#include "mylist.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{   Mylist stulist;
    Student st;
    ifstream infile;
    infile.open("dream.txt");
    if(!infile.is_open())
        std::cout << "Cannot open file ,please check!" ;
     for (int i = 0;i < ListSize && !infile.eof(); ++i){
         std::getline(infile,st.name,'#');
         str_tim(st.name);
         std::cout << st.name;
         infile >> st.scores ;
         std::cout << st.scores <<std::endl;
         while (infile.get() != '\n' && !infile.eof() ) {
             continue;
         }
         stulist.additem(st);
     }
     infile.close();
    std::cout <<boolalpha <<  std::endl;
    std::cout << "stulist is full?  " << stulist.isfull() << noboolalpha << endl;
    std::cout << "stulist is emputy " << stulist.isempty() <<endl;
    std::cout << "stulist size: " << stulist.getsize() << endl;
    stulist.vist(showinfo);
    Item mily={"Mily",160};
    stulist.additem(mily);
    stulist.vist(showinfo);
    ofstream outfile;
    outfile.open("dream.txt");
    if(!outfile.is_open())
        std::cout << "Cannot open file ,please check!" ;
    stulist.writefile(outfile,printname,printscore);
    outfile.close();
    cout << "Hello World!" << endl;
    return 0;
}
