#include <bits/stdc++.h>
using namespace std;

//constructor is special type of function
    // rules: write in class, no return type, same name function

class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    //construction // write in class 
    // Student(int r, int c, double g) // No written type + same name function
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};
int main()
{
    //From User 
    // int r;
    // int c;
    // double g ;
    // cin >> r >> c >> g ;
    // Student rahim(r,c,g);

    // From user Shortcut 
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa ;



    // shortcut by  construction function
    // Student rahim (45,5,3.2);
    // Student karim (4,5,5);

    // Student rahim;
    // rahim.roll = 45;
    // rahim.cls = 9;
    // rahim.gpa = 4.67;

    // Student karim;
    // karim.roll = 2;
    // karim.cls = 9;
    // karim.gpa = 4.93;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    //cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}
