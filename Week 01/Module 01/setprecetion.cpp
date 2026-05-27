// How many digit we need after point
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 22.345667 ;
    cout << fixed << setprecision(10) << d << endl ;
}