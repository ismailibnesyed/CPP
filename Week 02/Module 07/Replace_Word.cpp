#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string S, X;
        cin >> S >> X ;
        int pos1 = S.find(X);
        while (pos1 != string::npos)
        {
            S.replace(pos1, X.size(), "#");
            pos1 = S.find(X, pos1 + 1);
        }
        cout << S << endl ;
    }
    return 0;
}