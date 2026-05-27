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
Student fun()
{
    Student karim (4,5,5);
    return karim ;
}
int main()
{
    Student obj = fun() ;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}
