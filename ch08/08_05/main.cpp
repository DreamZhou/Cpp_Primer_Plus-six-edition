#include <iostream>

template <typename T>
T max5(const T & array[] );
int main()
{
    int intarray[5] = {0,5,65,55,55};
    double doublearray[5] = {64.2,55.5,55,444.2,100.2};
    int imax = max5(intarray);
    double dmax = max5(doublearray);
    std::cout << "The max of intarray[5] is " << imax << std::endl;
    std::cout << "The max of doublearray[5] is " << dmax << std::endl;
    return 0;
}

template <typename T>
T max5(const T & array[] )
{
    T max = array[0];
    for ( size_t i = 0 ; i < 5; ++i){
        if (array[i] > max )
            max = array[i];
    }
    return max ;
}


// 数组与函数
// T max( T array[] ) or T max(T * array ) !!!!!!!
