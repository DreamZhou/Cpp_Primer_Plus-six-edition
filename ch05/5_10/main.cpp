#include <iostream>


int main()
{
    int count;

    std::cout << "Enter numbers of rows: " ;
    std::cin >> count ;
    for (int i = 0; i < count; ++i){
        for (int j = 0; j < count; ++j){
             if(j < count - i - 1)
                 std::cout << ".";
              else
                 std::cout << "*";
        }
        std::cout <<  std::endl;

    }
    return 0;
}
