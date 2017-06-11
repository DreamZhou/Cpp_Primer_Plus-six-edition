#include "mystring.h"
#include <iostream>
#include <cstring>
#include <cctype>

int MyString::num_strings = 0 ;
MyString::MyString()
{
    len = 0;
    str = nullptr;
    num_strings++;
}

MyString::MyString(const char * s)
{
	len = strlen(s) ;
	str = new char[len + 1] ;
	strcpy (str, s);
	num_strings++ ;

}
MyString::MyString(const MyString & mystr)
{
	num_strings++ ;
	len = mystr.len;
	str = new char[len + 1];
    strcpy(str, mystr.str);
	
}
	//other functions
void MyString::StringToLow()
{
    for (int i = 0; i < len; ++i ){
        str[i] = tolower(str[i]);
	}
}
void MyString::StringToHigh()
{
    for (int i = 0; i < len; ++i )
        str[i] = toupper(str[i]);
}
int MyString::count(char c)
{
	int n = 0;
	for (int i = 0; i < len; ++i){
        if (str[i] == c)
            n++;
	}
	return n;
}
	//overload functions
MyString MyString::operator+(const MyString & mystr) const
{
	MyString sum;
	sum.len= len + mystr.len;
    sum.str = new char[sum.len + 1];
	strcpy(sum.str, str);
	strcat(sum.str,mystr.str);
    return sum;
}


MyString MyString::operator+(const char * s) const
{
	MyString sum;
	sum.len= len + strlen(s);
    sum.str = new char[sum.len + 1];
	strcpy(sum.str, str);
	strcat(sum.str,s);
	return sum;
}
MyString& MyString::operator=(const MyString & mystr)
{
    if (this == &mystr){
		return *this;
	}
	len = mystr.len;
	delete [] str;
	str = new char[len + 1];
    strcpy(str, mystr.str);
    return *this;
}

MyString& MyString::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy (str, s);
    return *this;
}
	//destructor
MyString::~MyString()
{
	num_strings--;
    delete [] str;

}
//friend functions

std::istream & operator>>(std::istream & in, MyString & mystr)
{
    char temp[MyString::CINLIM];
    in.get(temp,MyString::CINLIM);
    if (in)
        mystr = temp;
    while (in && in.get() != '\n') {
        continue;
    }
    return in;

}

std::ostream & operator<<(std::ostream & os, const MyString & mystr)
{
    os << mystr.str;
	return os;
}

MyString operator+(const char *s, const MyString & mystr)
{
    MyString sum;
    sum.len= strlen(s) + mystr.len;
    sum.str = new char[sum.len + 1];
    strcpy(sum.str, s);
    strcat(sum.str,mystr.str);
    return sum;
}

bool operator <(const MyString &lhs, const MyString &rhs)
{
    return std::strcmp(lhs.str,rhs.str) < 0 ;
}
bool operator >(const MyString &lhs, const MyString &rhs)
{
    return  std::strcmp(lhs.str,rhs.str) > 0 ;
}
bool operator ==(const MyString &lhs, const MyString &rhs)
{
    return  std::strcmp(lhs.str,rhs.str) == 0 ;
}


