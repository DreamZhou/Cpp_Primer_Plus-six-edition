#include <iostream>

int cnt = 0;
void printstring(char * s, int n = 0);
const int strSize = 50;
int main()
{
    char str[strSize];
    std::cout << "Enter your greetings: \n";
    std::cin.getline(str,strSize);
    printstring(str);
    printstring(str);
    printstring(str,2);
    printstring(str,3);
    return 0;
}

void printstring(char * s, int n)
{
    cnt++;
    if (n != 0){
        for (int i = 0; i < cnt; ++i){
            std::cout << s << std::endl;

        }
    }else
        std::cout << s << std::endl;

    std::cout << "printstring invoke " << cnt << " times." << std::endl;
}
