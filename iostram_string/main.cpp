#include <iostream>
#include <string>

int main()
{
    using std::string;
    using std::cout;
//string 的初始化；
    string s0 ("Initial string");
    string s1;                           // an empty string with a length of zero characters.
    string s3(" ") ;
    string third_date = "The Bread Bowl";       // string assignment. c string
    string fourth_date = {"Hank's Fine Eats"};  // string assignmeng initializer list.
    string helloworld("Hello World!");          // from c-string
    string helloworld2("HelloWorld",3);         //from buffer string (const char* s, size_t n)  n ：Number of characters to copy.
    string fill(5,'h');                         //fill constructor
    string range(s0.begin(),s0.begin()+6);      //range
    string s2{"initializer list"} ;             // initializer list

    std::cout << "s0: " << s0 << "\n"
              << "s1: " << s1 << "\n"
              << "third_date: " << third_date << "\n"
              <<"fourth_date: " << fourth_date << "\n"
              << "helloworld: " << helloworld << "\n"
              << "helloworld2: " << helloworld2 << "\n"
              << "fill: " << fill << "\n"
              << "range: " << range << "\n"
              << "s2: " << s2 << std::endl;
    std::cout << *s0.begin() << " " << *(--s0.end()) << std::endl;   // iterator  pointer  s0.end() 是尾后迭代器 ！
    s2.append(2,'c');
    std::cout << s2;
    std::cout <<  "s1.empty is " << s1.empty() <<std::endl;
    std::cout << "s3.empty is " << s3.empty() << std::endl;
    std::cout << "s0.size(): " << s0.size() << std::endl
              << "s0.length(): "<< s0.length() << std::endl
              << "s0.capacity(): " << s0.capacity()  << std::endl
              << "s0.max_size(): "<< s0.max_size()  << std::endl;
    return 0;
}
