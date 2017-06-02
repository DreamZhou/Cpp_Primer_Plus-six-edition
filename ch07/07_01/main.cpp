#include <iostream>

double harmonicMean(double,double);
int main()
{
    double x1;
    double x2;
    std::cout << "Enter two number: ";
    std::cin >> x1 >> x2;
    while ((x1 != 0)&&( x2 != 0)) {
        std::cout << "the harmonic mean of " << x1 << " and "
                  << x2 << " is " << harmonicMean(x1,x2) << std::endl;
        std::cout << "Enter two number: ";
        std::cin >> x1 >> x2;

    }
    return 0;
}

double harmonicMean(double x, double y)
{
    return 2.0 * x * y /( x + y) ;
}
