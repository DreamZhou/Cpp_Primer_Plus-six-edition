#include <iostream>
#include <mytime.h>

int main()
{
    using namespace std;
    MyTime aida(3,35);
    MyTime todca(2, 48);
    MyTime temp;

    cout << "Aida and Tosca: \n";
    cout << aida << "; " << todca << endl;
    cout << "Aida + todca: " << aida + todca << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17 = " << temp << endl;
    cout << "10.0 * Todca: " << 10 * todca << endl;

    return 0;
}
