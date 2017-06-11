#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    Stack em;
    Stack hh(5);
    Item po;
    std::cout << "before users input : \n";
    std::cout << em << std::endl;
    std::cout << "Please enter A to add a purchase order,\n"
              << "p to process a PO, or Q to quit : ";
    char ch;
    while ((std::cin >> ch) && (std::toupper(ch) != 'Q') ) {
        while (std::cin.get() != '\n') {
            continue;
        }
        if (! isalpha(ch)){
            std::cout << '\a';
            continue;
        }
        switch (ch) {
        case 'a':
        case 'A':
            std::cout << "Enter a PO number to add: ";
            std::cin >> po ;
            if (em.isfull()){
                std::cout << "em already full!\n";
            }
            em.push(po);
            break;
         case 'p':
         case 'P':
            if (em.isempty()){
                std::cout << "em already empty!\n";
            }
            em.pop(po);
            std::cout << "po = " << po << std::endl ;
            break;

        }
        std::cout << "Please enter A to add a purchase order,\n"
                  << "p to process a PO, or Q to quit: ";
    }
    std::cout << "After user input:\n";
    std::cout << em << std::endl;
    std::cout << "**********************\n";
    std::cout << "h:   \n";
    std::cout << hh << std::endl;
    hh = em ;
    std::cout << hh << std::endl;
    std::cout << "Bye!\n" ;
    return 0;
}
