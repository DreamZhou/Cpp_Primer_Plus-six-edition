#include <iostream>
#include <fstream>
#include<vector>
struct Patron{
    std::string name;
    double donations;
};

int main()
{
     const int grandDonation = 10000;
     std::string filename;
     std::cout << "Enter name of data file:";
     std::cin >> filename;

     std::ifstream inFile;
     inFile.open(filename);
     if (!inFile.is_open()){
         std::cout << "Could not open the file " << filename << " !\n";
         std::cout << "Programe terminating! \n";
         std::exit(EXIT_FAILURE);
     }
      int num ;
      inFile >> num;
      inFile.get();
      std::vector<Patron> patroninfo(num);
      for (int i = 0; i < num; ++i){
        std::getline(inFile,  patroninfo[i].name);
        inFile >> patroninfo[i].donations;
        inFile.get();
     }

     std::cout << "          Grand Patrons              \n";
     for (int i = 0; i < num; ++i){
         if (patroninfo[i].donations > grandDonation)
             std::cout << patroninfo[i].name << "   " << patroninfo[i].donations << std::endl;
     }
     std::cout << "          Patrons                    \n";
     for (int i = 0; i < num; ++i){
         if (patroninfo[i].donations <= grandDonation)
             std::cout << patroninfo[i].name << "   " << patroninfo[i].donations << std::endl;
     }

     inFile.close();
        return 0;
}
