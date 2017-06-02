#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    std::cout << "The probability is : "
              << probability(47 , 5) * probability(27 , 1) << std::endl;
    std::cout << "Done!" << std::endl;
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0 ;
    long double n;
    unsigned p;
    for ( n = numbers, p = picks; p > 0; --n, --p){
        result = result * p / n ;
    }
    return result ;

}
