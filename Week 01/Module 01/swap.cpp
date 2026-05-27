#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b ;
    cin >> a >> b ;
    swap(b,a);
    // int temp = a;
    // a = b;
    // b = temp ;
    cout << a << " " << b << endl ;
    return 0;
}