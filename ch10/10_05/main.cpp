#include "stack.h"
#include <iostream>

bool addcustomer(Stack & stk);
bool delcustomer(Stack & stk ,double & totalpay);
void promot(char & ch);

int main()
{
    Stack customerstack;
    double totalpayment = 0.0;
    char ch;
    promot(ch);
    while (ch) {
        switch (ch) {
        case 'a':
            if(customerstack.isfull()){
                std::cout << "customers are full now! select 'd' or 'p' or 'q' please!";
                break;
            }
            addcustomer(customerstack);
            break;
        case 'd':
            if (customerstack.isempty()){
                std::cout << "customer is already emputy! select 'a' or 'p' or 'q' please!";
                break;
            }
            delcustomer(customerstack,totalpayment);
            break;
        case 'p':
            std::cout << "Total payment is " << totalpayment << std::endl;
            break;
        case 'q':
            std::cout << "Bye bye!";
            return 0;
            break;
        default:
            std::cout << "Your must select 'a','d','p'or'q' other characters doesn't work! \n";
            break;
        }

        std::cout << std::endl;
        promot(ch);
    }
    return 0;
}

bool addcustomer(Stack & stk)
{
    Customer a;
    std::cout << "Enter customer name(in 35 characters space included): ";
    std::cin.getline(a.fullname,50);
    std::cout << "Enter payment:  ";
    std::cin >> a.payment;
    while (std::cin.get() != '\n') {
        continue;
    }
    return stk.push(a);

}

bool delcustomer(Stack &stk ,double & totalpay)
{
    Customer a;
    bool success = stk.pop(a);
    totalpay += a.payment;
    return success;
}
void promot(char & ch)
{
    std::cout << "************************************************\n"
              << "a add a customer.           d delect a customer.\n"
              << "p print total payment.      q quit.             \n"
              << "************************************************\n";
    std::cout << "Enter a character to select which to do: ";
    ch=std::cin.get();
    while (std::cin.get() != '\n') {
        continue;
    }
//    std::cout << std::endl;
}


//缓冲器的 残留的 \n 真烦人
//
