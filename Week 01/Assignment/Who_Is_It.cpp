#include <bits/stdc++.h>
using namespace std;

// -----Class ------
class Students
{
    public:
    int id;  // ID
    string nm; // Name
    char s; // section
    int total_marks ;
};

//-------Sort, Compare function---
bool cmp(Students l, Students r)
{
    if(l.total_marks > r.total_marks)
    {
        // Desending
        return true ;
    }
    else if(l.total_marks < r.total_marks)
    {
        // Ascending
        return false ;
    }
    else
    {
        // Equal
        if(l.id < r.id)
        {
            return true ;
        }
        else 
        {
            return false ;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    Students a[3] ;
    while(T--)
    {
        for (int i=0; i<3; i++)
        {
            cin >> a[i].id >> a[i].nm >> a[i].s >> a[i].total_marks ;
        }
        sort(a,a+3,cmp);
        cout << a[0].id << " " << a[0].nm << " " << a[0].s << " " << a[0].total_marks << endl;
    }
    return 0;
}
