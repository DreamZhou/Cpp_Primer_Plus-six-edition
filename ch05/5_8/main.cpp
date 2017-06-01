#include <iostream>
#include<cstring>
const int ArraySize = 30 ;
int main()
{
  char words[ArraySize];
  int count =0;
  std::cout << "Enter words (to stop, type the word done): \n";
  while (std::cin >> words) {
      if(strcmp(words,"done")==0){
          break;
      }
      ++count;
  }
  std::cout << "You entered a total of " << count << " words." <<std::endl;

  return 0;
}
