#ifndef SALES_H
#define SALES_H

#include <array>
#include <iostream>

namespace SALES {
const int QUARTERS = 4;
class Sales
{
private:
    std::array<double, QUARTERS> saledate;
    double average = 0.0;
    double max =0.0;
    double min =0.0;
public:
    Sales() = default;
    Sales(std::array<double,QUARTERS> sa);
    void showSales()const ;
    Sales setSales() const;
    ~Sales()
    {
      std::cout << "destruct \n"  ;
    }

};

Sales setSales();

}

#endif // SALES_H
