#include "vector.h"
#include <iostream>
#include <random>
#include <ctime>
#include <fstream>
#include <array>
#include <vector>
int main()
{
    using namespace std;
    using  VECTOR::Vector;

//    Vector folly(3.0, 4.0);
//    Vector fooleery(20,30,VECTOR::Vector::POL);
//    cout << folly << endl;
//    cout <<fooleery << endl;
//    folly.reset(60,90,VECTOR::Vector::POL);
//    fooleery.rect_mode();
//    cout << folly <<endl;
//    cout << fooleery <<endl;
//    cout << "Hello World!" << endl;
    string fileName = "dream.txt";
    ofstream outfile(fileName, ofstream::app);
    if (!outfile.is_open()){
        cout << "Cannot open file: " << fileName << endl;
    }
    uniform_real_distribution<double> u(0,360);
    default_random_engine e(time(0));
    double direction;
    Vector step;
    Vector result;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    cin >> target ;
    cout << "Enter step size: ";
    cin >> dstep;
    std::vector<Vector> ar;
    ar.push_back(result);
    outfile << "Target Distance: " << target <<", Step Size: " << dstep << endl;
    for (size_t i = 0; result.magval() < target ; ++i ) {
        direction = u(e);
        step.reset(dstep,direction,Vector::POL);
        result = result + step;
        ar.push_back(result);
    }
    for (size_t i =0; i <= ar.size()-1; ++i){
        outfile <<i << ": " << ar[i] << endl;
    }
    outfile << "After " << ar.size()-1 << " steps, the subject has the following location: \n";
    outfile << result << endl;
    outfile << "or\n";
    result.polar_mode();
    outfile << result << endl;
    outfile << "Average outward distance per step = " << result.magval() / (ar.size()-1) << endl
            << endl;
    outfile.close();
    return 0;
}
