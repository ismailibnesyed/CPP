#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size() ;
    // if(s.size() % 2 == 1)
    // {
    //     sz = (s.size()/2) - 1 ;
    // }
    // cout << s << s.size();
    int flag = 1 ;
    if(s[0] != s[s.size() - 1])
    {
        flag = 0 ;
    }
    else 
    {
        for(int i=0; i<sz; i++)
        {
            int j = s.size() - 1 ;
            if(s[i] != s[j])
            {
                flag = 0;
            }
            j--;
        }
    }
    if(flag = 1)
    {
        cout << "YES\n" ;
    }
    else
    {
        cout << "NO\n" ;
    }
    return 0;
}
