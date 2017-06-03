#include <iostream>

template <typename T>
T maxn(const T * arr, const size_t t);

template<char*>
char * maxn(const char*, const size_t t);

int main()
{

    int iarray[6] = { 45,552,655,555,10000,55};
    double darray[5] = {555,10.2,5212.4,445485,5};
   const char * carray[5] ={ "Hello World!",
                      "Nice to meet you!",
                      "Ni hao ma?",
                      "hahahahhaha",
                      "Bye Bye"};  // 字符串常量要加 const！！！
    std::cout << "The max of iarray is: " << maxn(iarray,6) << std::endl
              << "The max of darray is: " << maxn(darray,5) << std::endl
              << "The max of carray is: " << maxn(carray,5) << std::endl;
    std::cout << "Done!\n";

    return 0;
}

template <typename T>
T maxn(const T * arr, const size_t t)
{
    T max = arr[0];
    for (size_t i =0 ; i < t; ++i){
        if ( arr[i] > max)
            max = arr[i];
    }
    return max;
}

// 注意要加 const ！！
