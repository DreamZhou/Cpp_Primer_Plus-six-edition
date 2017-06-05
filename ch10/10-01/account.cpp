#include "account.h"
#include <iostream>

void Account::setaccount()
{
    std::cout << "Enter the name : ";
    std::getline(std::cin, name_);
    std::cout << "Enter the accountId: ";
    std::cin.getline(accountId_,nameSize);
    std::cout << "Enter the account you want deposit: " ;
    std::cin >> accountNum_;
    while (std::cin.get() != '\n') {
        continue;
    }
}
void Account::deposit(double dp)
{
    accountNum_ += dp;
}
void Account::withdraw(double wd)
{
    if (wd > accountNum_){
        std::cout << "Deposit money must less than withdraw.";
     return;
    }
    accountNum_ -= wd;
}
std::string Account::showname() const
{
     return name_;
}
char* Account::showaccountId() const
{
    return accountId_ ;
}

double Account::showaccountNum() const
{
    return accountNum_;
}
void Account::showaccount() const
{
    std::cout << "name: " << showname() << std::endl;
    std::cout << "accouctId: " << showaccountId() <<std::endl;
    std::cout << "accountNum: " << showaccountNum() <<std::endl;

}
