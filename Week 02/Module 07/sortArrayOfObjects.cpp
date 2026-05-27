#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student l, Student r)
{
    // ternary operator 
    // return (l.mark == r.mark) ? l.roll > r.roll : l.roll < r.roll ;
    if(l.mark > r.mark)
    {
        return true;
    }
    else if (l.mark < r.mark)
    {
        return false;
    }
    else
    {
        return l.roll < r.roll ;
        // if(l.roll < r.roll)
        // {
        //     return true;
        // }
        // else 
        // {
        //     return false ;
        // }
    }
    // -------Shortcut ------
    // return l.mark > r.mark ;
}

int main()
{
    int n ;
    cin >> n ;
    Student a[n] ;
    for (int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark ;
    }
    sort(a,a+n,cmp);
    for (int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}
