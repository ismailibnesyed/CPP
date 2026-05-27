#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a ;
    int b = (int)a ;
    //cout << b ;
    if(b>=65 && b<=90)
    {
        cout << "ALPHA\nIS CAPITAL\n" ;
    }
    else if(b>=97 && b<=122 )
    {
        cout << "ALPHA\nIS SMALL\n" ;
    }
    else 
    {
        cout << "IS DIGIT\n" ;
    }
    return 0;
}

