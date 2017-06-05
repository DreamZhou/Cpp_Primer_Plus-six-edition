#include "sales.h"
#include <algorithm>


SALES::Sales::Sales(std::array<double, SALES::QUARTERS> sa)
{
    saledate = sa;
    double total = 0.0;
    std::array<double,SALES::QUARTERS>::iterator itor;
    for (auto i : sa){
        total += i;
        std::cout << i << " ";
    }
    average = total / QUARTERS;
    itor = std::min_element(sa.begin(),sa.end());
    min = *itor;
    itor = std::max_element(sa.begin(),sa.end());
    max = *itor;
}

void SALES::Sales::showSales() const
{
    std::cout << "The sales is: ";
    for (auto i : this->saledate){
       std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "average of sales : " << average << std::endl
              << "max of sales     : " << max << std::endl
              << "min of sales     : " << min << std::endl;
}



SALES::Sales SALES::setSales()
{   std::array<double,QUARTERS> sa;
    for (int i = 0; i < QUARTERS; i++){
        std::cout << "Enter the sales #" << i+1 << " :";
        std::cin >> sa[i];
    }

    return SALES::Sales(sa) ;
}

