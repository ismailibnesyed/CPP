#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n ;
    cin >> n ;
    Student a[n] ;
    for (int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].mark ;
    }
    Student mn; // for printing object
    mn.mark = INT_MAX ;
    // int mn = INT_MAX ;
    // int mx = INT_MIN ;
    for (int i=0; i<n; i++)
    {
        // mn = min(a[i].mark,mn);
        // mx = max(a[i].mark,mx);
        if(a[i].mark < mn.mark)
        {
            mn = a[i] ;
        }
    }
    // cout << "Minimum mark is = " << mn << endl;
    // cout << "Maximum mark is = " << mx << endl;
    cout << mn.name << " " << mn.roll << " " << mn.mark << endl ;
    return 0;
}
