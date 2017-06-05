#include <iostream>
#include <account.h>


int main()
{
    Account a = {"Dream","dreamzhou",152512};
    a.showaccount();
    a.withdraw(500);
    a.showaccount();
    a.deposit(1000);
    a.showaccount();
    Account b;
    b.showaccount();
    b.setaccount();
    b.showaccount();

    std::cout << "Bye!\n" ;
    return 0;
}
