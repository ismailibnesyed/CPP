#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase ;
    while(testcase--)
    {
        string word;
        cin >> word ;
        if(word.size()>=11)
        {
            cout << *word.begin() << word.size()-2 << *(word.end() -1 ) << endl;
        }
        else 
        {
            cout << word << endl;
        }
    }
    return 0;
}
