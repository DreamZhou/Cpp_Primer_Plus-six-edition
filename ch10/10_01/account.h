#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <cstring>
#include <iostream>
const int nameSize = 50;
class Account
{
public:
    Account ():  name_("Noname"),accountNum_(0.0)
    {
        accountId_ = new char[strlen("NoId") + 1 ];
        std::strcpy(accountId_,"NoId");
        std::cout << "construct " << name_ << std::endl;;
    }
    Account (std::string name, const char* accountId, double accountNum)
        : name_(name),accountNum_(accountNum)
    {
        accountId_ = new char[strlen(accountId) + 1];
        std::strcpy(accountId_,accountId);
        std::cout << "construct " << name_;
    }
    void setaccount();
    void  withdraw(double wd);
    void deposit(double dp);
    std::string showname() const;
    char* showaccountId() const;
    double showaccountNum() const;
    void showaccount() const ;
    Account(Account &) = delete;
     ~ Account()
     {
         delete accountId_;
         std::cout << "delete " << name_ << std::endl;  // 在这用这个合适吗？
     }


private:
    std::string name_;
    char* accountId_;
    double accountNum_ ; 
};
#endif
