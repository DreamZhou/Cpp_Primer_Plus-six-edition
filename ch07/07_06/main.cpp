#include <iostream>

const int ArSize = 10 ;
int Fill_array(double array[], int arraysize);
void Show_array(double array[], int arraysize);
void Reverse_array(double array[], int arraysize);

int main()
{
    double ar[ArSize] ;
    int n = Fill_array(ar, ArSize);
    Show_array(ar,ArSize);

    std::cout <<"************** " << n << " ************\n";

    Reverse_array(ar,ArSize);
    Show_array(ar,ArSize);
    std::cout <<"\n************** " << n << " ************"<< std::endl;
    Reverse_array(ar+1 , ArSize - 2);
    Show_array(ar,ArSize);
    return 0;
}

int Fill_array(double array[], int arraysize)
{
    std::cout << "Enter the double number: ";
    int i = 0;
    while ( (std::cin >> array[i]) && (i < arraysize)) {
        if(++i < arraysize)
            std::cout << "Enter the double number: ";
        else
            break;
    }
    return i;
}
void Show_array(double array[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
void Reverse_array(double array[], int arraysize)
{
    for (int i = 0, j = arraysize-1; i < arraysize / 2 ; ++i, --j){
        double temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

}

/// 如果 输入数字提前结束，数组翻转会有未输入的数字！
