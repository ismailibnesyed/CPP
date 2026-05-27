#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nA = 0, nD = 0;
    while(n--)
    {
        char x;
        cin >> x ;
        // cout << x << endl;
        if (x == 'A')
        {
            nA++ ;
        }
        else 
        {
            nD++ ;
        }
    }
    if(nA>nD)
    {
        cout << "Anton\n" ;
    }
    else if (nD>nA)
    {
        cout << "Danik\n" ;
    }
    else if (nA==nD)
    {
        cout << "Friendship\n" ;
    }
    return 0;
}
