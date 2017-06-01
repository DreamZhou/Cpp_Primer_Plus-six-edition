#include <iostream>
#include<string>

int main()
{
    std::string word;
    int cntVowels = 0;      //元音
    int cntConsonants = 0;   //辅音字母
    int cntOthers = 0;
    std::cout << "Enter words (q to quit): " << std::endl;
    while (std::cin >> word) {
        if (word == "q") {break;}
        if (std::isalpha(word[0])) {
            if (word[0] == 'a' || word[0] == 'A'
                || word[0] == 'e' || word[0] == 'E'
                || word[0] == 'i' || word[0] == 'I'
                || word[0] == 'o' || word[0] == 'O'
                || word[0] == 'u' || word[0] == 'U'){
                ++cntVowels;
            }
            else {
                ++cntConsonants;
             }

        }else  ++cntOthers;


    }
    std::cout << cntVowels << " words beginnig with vowels \n"
              << cntConsonants << " words beginning with consonants \n"
              << cntOthers << " others" << std::endl;
    return 0;
}
