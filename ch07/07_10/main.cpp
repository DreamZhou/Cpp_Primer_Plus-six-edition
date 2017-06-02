#include <iostream>

double add(double x, double y);
double minus(double x, double y);
double multiply(double x, double y);
double divided(double x, double y);
const int fsize = 4 ;
double caculate(double x, double y, double (*f)(double x,double y) );
int main()
{
   double (*pf[fsize])(double,double) = {add,minus,multiply,divided};
   std::cout << "Enter two number: ";
   double x1, y1;
   std::cin >> x1 >> y1;
   for (int i = 0; i < fsize; ++i){
       std::cout << x1 << " " << y1 << " " << caculate(x1,y1,pf[i]) << std::endl;
   }
   std::cout << "Done!\n";
}

double add(double x, double y)
{
    return x + y;
}

double minus(double x, double y)
{
    return x - y ;
}

double multiply(double x, double y)
{
    return x * y ;
}

double divided(double x, double y)
{
    return x / y;
}
double caculate(double x, double y, double (*f)(double x,double y) )
{
    return f(x ,y) ;
}
