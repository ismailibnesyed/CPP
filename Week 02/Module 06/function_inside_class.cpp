#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math, english;
    Student(string name, int roll, int math, int english)
    {
        (*this).name = name ;
        this->roll = roll ;
        this->english = english ;
        this->math = math ;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math+english << endl ;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 77, 88);
    Student Rakib("Rakib Ahmed", 29, 88 , 99);
    // cout << sakib.name << sakib.roll << endl;
    Rakib.total();
    sakib.total();
    return 0;
}
