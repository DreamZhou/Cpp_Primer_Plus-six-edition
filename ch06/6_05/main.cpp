#include <iostream>


int main()
{
    double income;
    double incomeTax;
    const double notax = 5000;
    const double tenPercentttax = 15000;
    const double fifteenPercentttax = 35000;
    std::cout <<"Enter the income please: ";

    while ( std::cin >> income ) {
        if (income < 0) break;
        if (income <= notax){
            incomeTax = 0;
        }else if ( income <= tenPercentttax) {
            incomeTax = (income - notax ) * 0.1;
        }else if ( income <= fifteenPercentttax) {
            incomeTax = (income - tenPercentttax) *0.15 +
                   ( tenPercentttax - notax) * 0.1;
        }else if (income > fifteenPercentttax){
            incomeTax = (income - fifteenPercentttax) * 0.2
                    +(fifteenPercentttax - tenPercentttax) *0.15
                    +( tenPercentttax - notax) * 0.1;
        }
        std::cout << "Your tax is " << incomeTax << std::endl;
        std::cout <<  "Enter the income please: ";
    }
    return 0;
}


