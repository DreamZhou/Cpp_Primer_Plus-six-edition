#include <iostream>
#include <string>
#include <cctype>
void stringToupper(std::string& str);
int main()
{

    std::cout << "Enter a string (q to quit): ";
    std::string s;
    std::getline(std::cin, s);
    while (s != "q") {
        stringToupper(s);
        std::cout << s << std::endl;
        std::cout << "Next string (q to quit): ";
        std::getline(std::cin, s);

    }
    std::cout << "Bye. \n";
    return 0;
}

void stringToupper(std::string& str)
{
    size_t lens = str.size();
    for (size_t i = 0; i < lens; ++i){
        str[i] = toupper(str[i]);  // std::toupper 和 cctype::toupper 不一样。 std::toupper 要求额外参数 std::locale
    }
}

