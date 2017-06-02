#include <iostream>

const int ArSize = 10 ;
int inputscore(double * ar);
void  printscore(double *ar , int n);
int  averagescore (double *ar , int n) ;

int main()
{

    double golfscores[ArSize] ;
    int cnt;
    cnt = inputscore(golfscores);
    printscore(golfscores,cnt);
    double average = averagescore(golfscores,cnt);
    std::cout << "The average of scores is :" << average
              << std::endl;





    return 0;
}

int inputscore(double * ar )
{
    int i = 0;
    std::cout << "Enter the score (q to quit) #" << i + 1 << " :";
    while((i < ArSize) && (std::cin >> ar[i])){
        if (++i < ArSize)
           std::cout << "Enter the score (q to quit) #" << i + 1 << " :";
        else
             break;
    }

    return i;
}

void  printscore(double *ar , int n)
{
    std::cout << "The scores: \n";
    for (int i = 0; i < n; ++i){
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;

}
int  averagescore (double *ar , int n)
{
    double total = 0;
    for (int i = 0; i < n; ++i){
        total += ar[i];
    }

    return total / n;
}
