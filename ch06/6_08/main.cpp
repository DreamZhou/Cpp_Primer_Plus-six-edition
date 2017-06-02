#include <iostream>
#include<fstream>

int main()
{
    std::ifstream inFile;
    std::string filename;
    std::string automobile;
    std::cout << "Enter name of file : ";
    std::getline(std::cin, filename);
    std::ofstream outfile;
    outfile.open(filename);
    std::cout << "Enter the make and model of automobile: ";
    std::getline(std::cin, automobile);
    std::cout << "Enter the model year: ";
    int year;
    std::cin >> year;
    std::cout << "Enter the original asking price: ";
    double a_price;
    std::cin >> a_price;
    double d_price;
    d_price = 0.913 * a_price;

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobile << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Was asking $" << a_price <<std::endl;
    std::cout << "Now asking $" << d_price <<std::endl;

    outfile << std::fixed;
    outfile.precision(2);
    outfile.setf(std::ios_base::showpoint);
    outfile << "Make and model: " << automobile << std::endl;
    outfile << "Year: " << year << std::endl;
    outfile << "Was asking $" << a_price <<std::endl;
    outfile << "Now asking $" << d_price <<std::endl;

    outfile.close();

    inFile.open(filename);
    if (!inFile.is_open()){
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Programe teminating. \n" ;
         std::exit(EXIT_FAILURE);
    }
    int count = 0;
    inFile.get();
    while (inFile.good()) {
        ++count;
        inFile.get();
    }
    std::cout << count << "chars read. \n";
    inFile.close();
    return 0;
}
