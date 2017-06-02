#include <iostream>

const char * sname[] = {"Spring", "Summer", "Fall", "Winter"};
const int Seasons = 4;
struct Expens
{
    double ex_enpenses[Seasons];
};

void fill (double da[]);
void show (double da[]);
void fill_b (Expens * ep);
void show_b(const Expens * ep);


int main()
{

    double expenses[Seasons];
    Expens exp;
    fill(expenses);
    show(expenses);

    std::cout << "********** PLAN B **********\n";
    fill_b(&exp);
    show_b(&exp);

    return 0;
}

void fill (double da[])
{
    for(int i = 0; i < Seasons; ++i){
        std::cout << "Enter " <<sname[i] << " expenses: ";
        std::cin >> da[i];
    }
}
void show(double da[])
{
    double total = 0.0;
    std::cout <<  "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i){
        std::cout << sname[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}


void fill_b (Expens * ep)
{
    for(int i = 0; i < Seasons; ++i){
        std::cout << "Enter " <<sname[i] << " expenses: ";
        std::cin >> ep->ex_enpenses[i];
    }
}
void show_b(const Expens * ep)
{
    double total = 0.0;
    std::cout <<  "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i){
        std::cout << sname[i] << ": $" << ep->ex_enpenses[i] << std::endl;
        total += ep->ex_enpenses[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}
