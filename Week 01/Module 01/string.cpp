#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x ;
    cin.ignore() ;
    //char s[100]; // it can be write in also string
    string s;
    cin >> s ;
    // fgets(s,100,stdin);
    //cin.getline(s,100);
    cout << x << " " << s << endl ;
    return 0;
}