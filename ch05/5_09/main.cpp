#include <iostream>
#include<string>

int main()
{
    std::string word ;
    int count = 0 ;

    std::cout << "Enter words (to stop, type the word done): \n";
    while (std::cin >> word) {
        if (word == "done"){
            break;
        }
        ++count;
    }
    std::cout << "You enter a total of " << count << " words." << std::endl;
    return 0;
}
