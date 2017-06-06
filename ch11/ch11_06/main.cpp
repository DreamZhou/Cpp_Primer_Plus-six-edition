#include "stonewt.h"
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    std::array<Stonewt,6> star={66,9,16,};
    double temp;
    Stonewt dd(3);
    for (int i =3; i < 6; ++i){
        cout << "Enter the pounds: ";
        cin >> temp;
        star[i] = temp ;
    }
    Stonewt sd(11);

    auto max = max_element(star.begin(),star.end());
    auto min = min_element(star.begin(),star.end());
    int cnt = count_if(star.begin(),star.end(),
                       [sd](const Stonewt & st){return st >= sd;});
    cout << "Max : " << *max << endl;
    cout << "Min : " << *min <<endl;
    cout <<  "No less than 11 pounds numbers" << cnt << endl;
    cout << "Hello World!" << endl;
    return 0;
}
