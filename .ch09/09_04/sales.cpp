#include "sales.h"
#include <iostream>
using namespace SALES ;

void setSales(Sales & s, const double ar[], int n)
{
    int cnt = (n > QUARTERS) ? QUARTERS : n;
    double total = 0.0;
    s.max = ar[0];
    s.min = ar[0];
    for (int i = 0; i < cnt; ++i){
        s.sales[i] = ar[i];
        total += ar[i];
        if (s.max < ar[i]) s.max = ar[i];
        if (s.min > ar[i]) s.min = ar[i];
    }
    s.average = total / cnt;
    if (cnt < QUARTERS)
    {
        for (int i = QUARTERS -1; i >= cnt; --i)
            s.sales[i] = 0;
    }

}
void setSales(Sales &s)
{   double total = 0.0;

    for (int i = 0; i < QUARTERS; i++){
        std::cout << "Enter the sales #" << i+1 << " :";
        std::cin >> s.sales[i];
    }
    s.max = s.sales[0];
    s.min = s.sales[0];
    for (int i = 0; i < QUARTERS; ++i){
        total += s.sales[i];
        if (s.max < s.sales[i]) s.max = s.sales[i];
        if (s.min > s.sales[i]) s.min = s.sales[i];
    }
    s.average = total / QUARTERS;

}
void showSales(const Sales &s)
{
    std::cout << "The sales is: ";
    for (int i = 0 ; i < QUARTERS; ++i){
        std::cout << s.sales[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "average of sales : " << s.average << std::endl
              << "max of sales     : " << s.max << std::endl
              << "min of sales     : " << s.min << std::endl;

}
