#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    double weight;
    int calorie;
};

void inputcandybar(CandyBar& cb, const char* bd = "Millennium",const double wt = 2.85,const int cal = 350);
void showcandybar(const CandyBar& cb);
int main()
{
    CandyBar candyb = {"Hello", 4.56,25};
    showcandybar(candyb);
    std::cout << std::endl;
    inputcandybar(candyb,"Hello candy",5.5,250);
    CandyBar defaultcb;
    inputcandybar(defaultcb);
    showcandybar(defaultcb);
    return 0;
}

void inputcandybar(CandyBar & cb, const char* bd,const double wt,const int cal)
{
    cb.brand = bd;
    cb.weight = wt;
    cb.calorie = cal;
}

void showcandybar(const CandyBar &cb)
{
    std::cout << "Show CandyBar" << std::endl;
    std::cout << "brand: " << cb.brand << std::endl
              << "weight: " << cb.weight << std::endl
              << "calorie: " << cb.calorie <<std::endl;
}
