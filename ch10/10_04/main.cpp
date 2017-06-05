#include "sales.h"
#include <iostream>


int main()
{
    std::cout << "Hello World!" << std::endl;
    SALES::Sales sales_a;
    sales_a.showSales();
    std::cout << "Now please enter sales data: \n";
    sales_a = SALES::setSales();
    sales_a.showSales();

    std::array<double,SALES::QUARTERS> salesData = { 150.5, 541, 354,100};
    SALES::Sales sales_b(salesData);
    sales_b.showSales();

    std::cout << "Done!" ;

    return 0;
}
