#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    if(x%2==0)
    {
        cout << "Even\n" ;
    }
    else
    {
        cout << "Odd\n" ;
    }
    // ternary operator
    x%2==0 ? cout << "Even Number \n" : cout<< "Odd Number\n" ;
}