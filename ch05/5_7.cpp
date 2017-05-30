#include <iostream>

struct car
{
    std::string maker;
    int date_year;
};

int main()
{
    int cars;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> cars;

    car * carsArray = new car[cars] ;
    for (int i = 0; i < cars; ++i)
    {
        std::cout << "Cars #" << i+1 << ":" <<std::endl;
        std::cout << "Please enter the make: ";
        std::cin.get();    //
        std::getline(std::cin, carsArray[i].maker );
        std::cout << "Please enter the year made: ";
        std::cin >> carsArray[i].date_year;
    }

    std::cout << "Here is your collection: "<< std::endl;
    for (int i = 0; i < cars; ++i)
    {
        std::cout << carsArray[i].date_year<<" "<<carsArray->maker << std::endl;
    }
    delete [] carsArray;
    return 0;
}
