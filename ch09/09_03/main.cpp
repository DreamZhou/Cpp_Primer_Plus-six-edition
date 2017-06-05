#include <iostream>
#include<cstring>

struct chaff
{
    char dross[20];
    int slag;
};
const int BUF =1024;
char buffer[BUF];
int main()
{
    chaff * pd = new (buffer) chaff[2];
    strcpy(pd[0].dross,"Hello World!");
    pd[0].slag = 10;
    strcpy(pd[1].dross,"I am hungry.");
    pd[1].slag = 100;
    for (int i = 0; i < 2; i++){
        std::cout << "Dross is: " << pd[i].dross << std::endl
                  << "Slag = " << pd[i].slag << std::endl;
    }
    std::cout << "Memory contents: \n";
    std::cout << "buffer[BUF] " << "at " << &buffer << std::endl
              << "buffer[BUF] " << "at " << (void *)buffer << std::endl
              << "pd[0]       " << "at " << &pd[0] << std::endl
              << "pd[1]       " << "at " << &pd[1] << std::endl;
    return 0;
}
