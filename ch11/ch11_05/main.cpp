#include "stonewt.h"
#include <iostream>



int main()
{
    using namespace std;
    Stonewt poping(9, 2.8);
    cout << "double mode: " << poping << endl;
    poping.setintpnd();
    cout << "int mode: " << poping << endl;
    poping.setstone();
    cout << "stone mode: " << poping <<endl;
    Stonewt bennyst = poping * 2 ;
    cout << "double mode: " << bennyst << endl;
    Stonewt jennyst = bennyst + poping ;
    jennyst.setmode(Stonewt::STONE);
    cout << "stone: " << jennyst<<endl;
    jennyst = jennyst * 0.5 ;
    jennyst.setmode(Stonewt::INTPND);
    cout << "int mode: " << jennyst << endl;
    jennyst = bennyst - jennyst ;
    jennyst.setmode(Stonewt::FLOATPND);
    cout << "double mode: " << bennyst << endl;


    return 0;
}
