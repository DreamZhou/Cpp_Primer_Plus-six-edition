#include <iostream>
#include<cstring>
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') {
        continue;
    }
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);

    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;

    cout << "Done! \n";

    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    for (; i < n; ++i){
        cout << "Enter name of student #" << i+1 <<": ";
        cin.getline(pa[i].fullname,SLEN);
        if (strlen(pa[i].fullname)==0) break;
        cout << "Enter hobby of studen #" << i+1 <<": ";
        cin.getline(pa[i].hobby,SLEN);
        cout << "Enter ooplevel of studen #" << i+1 <<": ";
        cin >> pa[i].ooplevel;
        while (cin.get() != '\n') {
            continue;
        }


    }
    return i;

}
void display1(student st)
{
    cout << "fullname : " << st.fullname << endl
         << "hobby    : " << st.hobby << endl
         << "ooplevel : " << st.ooplevel<< endl;
}
void display2(const student *ps)
{
    cout << "fullname : " << ps->fullname << endl
         << "hobby    : " << ps->hobby << endl
         << "ooplevel : " << ps->ooplevel<< endl;
}
void display3(const student pa[], int n)
{
   for (int i = 0; i < n; ++i){
       cout << "#" << i+1 << " students info! ****\n" ;
       display1(pa[i]);
   }
}
