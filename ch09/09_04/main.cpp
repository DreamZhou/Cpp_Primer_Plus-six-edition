#include "sales.h"
#include <iostream>

int main()
{
    SALES::Sales sales_a, sales_b;
    double salesData[10] = {150.5,541,354,165,155,252,556,225,259,252,};
    setSales(sales_a,salesData,3);
    std::cout << "Now please enter sales data: \n";
    setSales(sales_b);
    showSales(sales_a);
    showSales(sales_b);
    std::cout << "Done!";

    return 0;
}
