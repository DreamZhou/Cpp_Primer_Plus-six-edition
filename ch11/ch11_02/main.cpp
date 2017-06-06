#include <iostream>
#include <ctime>
#include <vector.h>
#include <random>



int main()
{
    using namespace std;
    using VECTOR::Vector ;
    uniform_real_distribution<double> u(0,360);
    default_random_engine e(time(0));
    double direction;
    Vector step;
    Vector result;
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target){
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target) {
            direction = u(e);
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            steps++ ;
        }
        cout << "After " << steps << " steps ,the subject "
                "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result <<endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0,0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    return 0;
}
