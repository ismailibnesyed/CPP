#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World, I am new in this world";
    // s.clear() ;
    cout << s.size() << endl;
    s.resize(80,'xyz');
    cout << s << endl;
    cout << s.max_size() << endl; // 10 to the power 6
    cout << s.capacity() << endl; // it is dynamic with respect to the value of s
    return 0;
}
