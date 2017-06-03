#include <iostream>

template <typename T>
void ShowArray(const T arr[], const size_t n);

template <typename T>
void ShowArray(  T * const arr[], const size_t n);

template <typename T>
T SumArray(const T arr[], const size_t n);

template <typename T>
T SumArray(  T * const arr[], const size_t n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 310, 310, 130};
    debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe" , 1300.0},
        {"Iby Stout", 1800.0}
    };
    double *pd[3] ;
    for (int i = 0 ; i < 3; ++i ){
        pd[i] = & mr_E[i].amount;
    }
    cout << "Listing Mr.E's counts of things:\n";
    ShowArray(things,6);
    cout << "sum of array things is : " << SumArray(things,6) << endl;
    cout << "Listing Mr.E's debts:\n";
    ShowArray(pd,3);
    cout << "Sum of array pd is: " << SumArray(pd,3) << endl;
    return 0;
}
 template <typename T>
void ShowArray(const T arr[], const size_t n)
{
    std::cout << "template A \n";
    for (size_t i = 0; i < n; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void ShowArray(T * const arr[],  const size_t n)   //为毛？此处 加const 出问题 ！！！ const T * arr[]
{
    std::cout << "template B \n";
    for (size_t  i = 0; i < n; ++i){
        std::cout << *arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T SumArray(const T arr[], const size_t n)
{   T sum = 0;
    std::cout << "template A \n";
    for (size_t i = 0; i < n; ++i){
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(  T * const arr[], const size_t n)
{   T sum = 0;
    std::cout << "template B \n";
    for (size_t  i = 0; i < n; ++i){
        sum += *arr[i];
    }
    return sum;
}
