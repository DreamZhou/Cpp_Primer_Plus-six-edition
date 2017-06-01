#include <iostream>

const int strsize = 20;
const int member_num =5;

struct Bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    Bop members[member_num] = {
        {"Wimp Macho","CEO","wim",0},
        {"Raki Rhodes","Junior Programmer","RakR",1},
        {"Celia Laiter","MIPS","CeL",1},
        {"Hoppy Hipma","Analyst Trainee","Hoa",1},
        {"Pat Hand","coder","LOOPY",2}
    };
    std::cout << "a. display by name        b. display by title\n"
              << "c. display by bopname     d. display by preference\n"
              << "q. quit" << std::endl;
    std::cout << "Enter your choice: ";
    char ch = std::cin.get();
    while(true){
    while (ch != 'a' && ch != 'b'
           && ch != 'c' && ch != 'd'
           && ch != 'q') {
        while (std::cin.get()!= '\n') {}  // 丢弃多余的字符！！
        std::cout << "Enter your choice: ";
        ch = std::cin.get();

    }
    switch (ch) {
    case 'a':
        for (int i = 0; i < member_num; ++i ){
            std::cout << members[i].fullname << std::endl;
        }
        break;
    case 'b':

        for (int i = 0; i < member_num; ++i ){
            std::cout << members[i].title << std::endl;
        }
        break;
    case 'c':
        for (int i = 0; i < member_num; ++i ){
            std::cout << members[i].bopname << std::endl;
        }
        break;
    case 'd':
        for (int i = 0; i < member_num; ++i ){
            if (members[i].preference ==0){
                std::cout << members[i].fullname << std::endl;
            }
            else if (members[i].preference == 1) {
                std::cout << members[i].title << std::endl;
            }
            else if (members[i].preference == 2) {
                std::cout << members[i].bopname << std::endl;
            }
        }
        break;
    case 'q':
        std::cout << "Bye!" << std::endl;
        return 0;
    }
    while (std::cin.get()!='\n') {}  // 丢弃多余的字符！！防止 输入aaaa 等输出多次！
    std::cout << "Next choice: ";
    ch = std::cin.get();

   }

}

