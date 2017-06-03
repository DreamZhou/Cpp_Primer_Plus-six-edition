#include "golf.h"
#include <iostream>
#include<cstring>
const int golferlmt = 10;
int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    int ok = setgolf(andy);
    if(ok) showgolf(andy);
    golf golfnames[golferlmt];

    int cnt; //how many golfer user has input;

    for(cnt = 0;  cnt < golferlmt; ++cnt) {
        if (!setgolf(golfnames[cnt]))
            break;

    }
    std::cout << "Now show the list :\n";
    for (int i = 0; i < cnt; ++i){
        showgolf(golfnames[i]);
    }
    std::cout << "Done";
    return 0;
}
