#include <iostream>
#include <array>

int main()
{
    const int ArSize = 10;
    std::array<double, ArSize> donations;
    double total = 0.0;
    int i = 0;
    while (i < ArSize && std::cin >> donations[i]) {
        total += donations[i];
        ++i;

    }
    double average = 0;
    if(i > 0)
       average = total / i;
    int count = 0 ;
    for (int j = 0; j < i; ++j)
        if (donations[j] > average){
            ++count;
        }
    std::cout << "Average of dontations is " << average
              << " and " << count << " donations more than average."
              << std::endl;
    return 0;

}
