#ifndef SALES_H
#define SALES_H

namespace SALES {
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
     };

};
void setSales(SALES::Sales & s, const double ar[], int n);
void setSales(SALES::Sales &s);
void showSales(const SALES::Sales &s);

#endif // SALES_H
