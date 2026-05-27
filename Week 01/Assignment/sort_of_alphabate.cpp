#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    // Read until EOF
    while (getline(cin, s)) 
    {
        sort(s.begin(), s.end());   // Sort the whole line
        s.erase
        (
            remove(s.begin(),s.end(), ' '),
            s.end()
        );
        cout << s <<endl ;          // Print as a single word
    }

    return 0;
}

