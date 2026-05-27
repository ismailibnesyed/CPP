#include <iostream>
//#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b ;
    // SHortcut for maximum and minimum , Header file is algorithm
    // cout <<"Minimum No is : " << min({1,2,3,4,5,6,7,8,0,9}) << endl; // minimum
    // cout << "Maximum No is : " << max({1,2,3,4,5,6,7,8,9}) << endl; // maximum
    if(a<b)
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl ;
    }
    return 0;
}