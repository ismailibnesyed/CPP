#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // s[5] = 'G' ;
    // string s2 = "World";
    // s.append(s2); //same to same s += s2;
    // s.push_back('A'); // same to same s += 'A' ; // not applicable for multiple char or string
    // s.pop_back(); // delete the last element of string    
    string s2 = "Hi";
    // s = s2;
    // s.assign("Gello");
    // s.erase(4) ;
    // s.erase(4,5) ;
    s.replace(6,5,"Sadia ") ; //(no of index, delete no of index, replace word)
    s.insert(12,"I Love You");
    cout << s << endl ;
    return 0;
}
