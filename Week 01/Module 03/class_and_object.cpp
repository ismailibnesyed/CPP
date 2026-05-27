#include <bits/stdc++.h>
using namespace std;
class Student
{
    public: // its may be private but work is like private
    char name[100];       // 100 byte
    int roll;            // 4 byte
    double gpa;         // 8 byte
};

int main()
{
    Student a,b ;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa ;
    //cin.ignore();
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa ;
    // Student a;
    // a.roll = 180;
    // a.gpa = 5.00;
    // //a.name = "Ismail" ;
    // char temp[100] = "Ismail";
    //strcpy(a.name,temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl ;
    cout << b.name << " " << b.roll << " " << b.gpa << endl ;
    return 0;
}
