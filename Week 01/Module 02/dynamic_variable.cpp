#include<bits/stdc++.h>
using namespace std;

int* p;
void fun()
{
    int *x = new int; // its in stack memory
    *x = 100 ;
    p = x ;
    cout << *p << endl ;

    return;
}
int main()
{
    fun();
    cout << *p << endl ;
    // int x = 10;
    // int *p = new int ;
    // *p = 100;
    // cout << *p << endl;
    return 0;
}