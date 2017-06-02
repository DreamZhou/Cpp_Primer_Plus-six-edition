#include <iostream>

long double factorial(unsigned num);

int main()
{
    std::cout << "Enter a number to caculate it's factorial(q to quit) :" ;
    int n;
    while (std::cin >> n) {
     std::cout << " n! = " << factorial(n) << std::endl;
     std::cout << "Enter a number to caculate it's factorial(q to quit) :";
    }
    return 0;
}

long double factorial(unsigned num)
{
    if (num == 0)
        return 1 ;
    else
       return num * factorial(num - 1);

}
