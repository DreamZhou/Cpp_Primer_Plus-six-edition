#include <iostream>
#include<cctype>

int main()
{
    char ch;
    std::cout << "Enter a char please: \n" ;
    std::cin.get(ch) ;

    while (ch != '@') {
        if(std::islower(ch)){
            std::cout << (char) std::toupper(ch);
        }else if (std::isupper(ch)){
            std::cout << (char) std::tolower(ch);
        }else if(!std::isdigit(ch)){
            std::cout << ch;
        }

        std::cin.get(ch) ;
    }

    return 0;
}

// cctype 返回 int 。。 被坑死了。
