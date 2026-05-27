#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // n is for testcase
    cin >> n;
    while(n--)
    {
        string x,y;
        cin >> x >> y;
        for(int i=0; i<x.size() || i<y.size(); i++)
        {
            if(x.size()<y.size() && x[i] == NULL)
            {
                cout << y[i] ;
            }
            else 
            {
                cout << x[i] << y[i] ;
            }
            
        }
        cout << endl;
    }
    return 0;
}
