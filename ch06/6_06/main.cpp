#include <iostream>
#include <string>
#include <array>
struct Patron{
    std::string name;
    double donations;
};
int main()
{
    const int grandDonation = 10000;
    std::cout << "Enter the number of patrons: ";
    int num;
    std::cin >> num;
    while (std::cin.get() != '\n') { }   //删除多余的字符
    Patron patroninfo[num];
    for (int i =0; i < num; ++i){
        std::cout << "Enter the name of #" << i + 1 << " patron :";
        std::getline(std::cin, patroninfo[i].name);
        std::cout << "Enter the donation of #" << i + 1 << " patron :";
        std::cin >> patroninfo[i].donations;
        while (std::cin.get() != '\n') { }  //删除多余的字符
        }
    std::cout << "          Grand Patrons              \n";
    for (int i = 0; i < num; ++i){
        if (patroninfo[i].donations > grandDonation)
            std::cout << patroninfo[i].name << " " << patroninfo[i].donations << std::endl;
    }
    std::cout << "          Patrons                    \n";
    for (int i = 0; i < num; ++i){
        if (patroninfo[i].donations <= grandDonation)
            std::cout << patroninfo[i].name << " " << patroninfo[i].donations << std::endl;
    }
    return 0;
}
