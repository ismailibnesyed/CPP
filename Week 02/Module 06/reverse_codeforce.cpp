#include <bits/stdc++.h>
using namespace std;
int main()
{
    //-----method 1--------
    // string s;
    // getline(cin,s);
    // stringstream ss(s);
    // string word ;
    // ss >> word ;
    // reverse(word.begin(),word.end()) ;
    // cout << word ;
    // while(ss >> word)
    // {
    //     reverse(word.begin(),word.end()) ;
    //     cout  << " " << word ;
    // }
    //----------------------------
    string s ;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss >> word ;
    reverse(word.begin(),word.end());
    cout << word ;
    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        cout << " " << word ;
    }
    //---------------------------------
    return 0;
}
