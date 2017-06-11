#include <iostream>
#ifndef MYSTRING_H_
#define MYSTRING_H_
class MyString 
{
private:
	char * str ;
	int len ;
	static int  num_strings;
    static const int CINLIM = 80 ;
public:
	// constructor
    MyString();
	MyString(const char * s);
    MyString(const MyString & mystr);
	// other functions
	void StringToLow();
    void StringToHigh();
	int count(char c);
	//overload functions
    MyString operator+(const MyString & mystr) const;
    MyString operator+(const char * s) const;
    MyString& operator=(const MyString & mystr);
    MyString& operator=(const char * s );
	//destructor
	~MyString();
	
	//friend functions
	
	friend std::ostream & operator<<(std::ostream & os, const MyString & s);
	friend std::istream & operator>>(std::istream & in, MyString & mystr);
	friend MyString operator+(const char * s, const MyString & mystr);
    friend bool operator < (const MyString & lhs, const MyString & rhs);
    friend bool operator > (const MyString & lhs, const MyString & rhs);
    friend bool operator == (const MyString & lhs, const MyString & rhs);
};

#endif  
