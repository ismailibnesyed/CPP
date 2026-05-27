#include <bits/stdc++.h>
using namespace std;

// -----Class ------
class Students
{
    public:
    string nm; // Name
    int cls;
    char s; // section
    int id; // ID
    int math_marks ; // Marks in Math
    int eng_marks ; // Marks in english
};

//-------Sort, Compare function---
bool cmp(Students l, Students r)
{
    // return l.total_marks > r.total_marks ;
    if(l.math_marks + l.eng_marks > r.math_marks + r.eng_marks)
    {
        // Desending
        return true ;
    }
    else if(l.math_marks + l.eng_marks < r.math_marks + r.eng_marks)
    {
        return false ;
    }
    else 
    {
        // if equal ;
        return l.id < r.id ;
    }
}

int main()
{
    int N;
    cin >> N;
    Students a[N] ;
    for (int i=0; i<N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks ;
    }
    sort(a,a+N,cmp);
    for (int i=0; i<N; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
