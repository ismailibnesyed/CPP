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
    //construction
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll; //----- Or -----
        this->roll = roll;
        this->cls = cls;
        (*this).gpa = gpa;
    }
};
int main()
{
    Student rahim (45,5,3.2);
    Student karim (4,5,5);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}
