#include <iostream>

const int ArSize = 10 ;
double * Fill_array(double* array, int arraysize);
void Show_array(double* array, double* end);
void Reverse_array(double* array, double * end);

int main()
{
    double ar[ArSize] ;
    double* pend = Fill_array(ar, ArSize);
    Show_array(ar,pend);

    std::cout <<"************** " <<  pend -ar+1<< " ************\n";

    Reverse_array(ar,pend);
    Show_array(ar,pend);
    std::cout <<"\n************** " << pend -ar+1 << " ************"<< std::endl;
    Reverse_array(ar+1 , pend - 1);
    Show_array(ar,pend);
    return 0;
}

double* Fill_array(double *array, int arraysize)
{
    std::cout << "Enter the double number: ";
    int i = 0;
    while ( (std::cin >> array[i]) && (i < arraysize)) {
        if(++i < arraysize)
            std::cout << "Enter the double number: ";
        else
            break;
    }
    return &array[i-1];
}
void Show_array(double* array, double* end)
{
    for (int i = 0; array + i <=end ; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
void Reverse_array(double* array, double* end)
{
    for (int i = 0, j = end - array ; i < (end-array+1) / 2 ; ++i, --j){
        double temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

}
//// 坑太多了
//// 可以考虑Fill_array 返回尾后指针！
