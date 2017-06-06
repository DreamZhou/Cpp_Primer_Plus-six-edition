#include <iostream>
#include <ctime>
#include <vector.h>
#include <random>
#include <vector>
#include <algorithm>

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
    cout << "Enter the times your want perfom: ";
    int cnt;
    cin >> cnt;
    std::vector<unsigned long> vec;
    vec.reserve(cnt);
    int i = 0 ;
    cout << "Enter target distance (q to quit): ";
    while ((cin >> target) ){
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target) {
            direction = u(e);
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            steps++ ;
        }
        vec.push_back(steps);
        steps = 0;
        result.reset(0,0);
        i++;
        if (i >= cnt)  break;
        cout << "Enter target distance (q to quit): ";
    }
    auto  min_itor = min_element (vec.begin(),vec.end());
    auto  max_itor = max_element (vec.begin(),vec.end());
    auto  avg = accumulate(vec.begin(),vec.end(),0.0) / vec.size() ;
    cout << " min: " << *min_itor
         << " max: " << *max_itor
//         << " vec.size" << vec.size()
         << " avg: " << avg << endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
    return 0;
}
