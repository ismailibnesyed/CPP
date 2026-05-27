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
};


int main()
{
    int N;
    cin >> N;
    Students a[N] ;
    for (int i=0; i<N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id ;
    }
    for(int i=0, j=N-1 ; i<(N/2); i++)
    {
        swap(a[i].s,a[j].s);
        j--;
    }

    for (int i=0; i<N; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}
