#include <bits/stdc++.h>
using namespace std;

int sumOfThree(int n, int s)
{
    int arr[n] ;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr, arr + n);
    for(int i=0; i<n-2; i++)
    {
        // cout << arr[i] << " " ;
        int l = i + 1 , r = n-1 ;
        while (l<r)
        {
            int sum = arr[i] + arr[l] + arr[r] ;
            if(sum == s)
            {
                return 1 ;
            }
            else if (sum < s)
            {
                l++ ;
            }
            else 
            {
                r--;
            }
        }
    }
    return 0 ;
}
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        int freq = sumOfThree(n,s);
        if(freq == 1)
        {
            cout << "YES\n" ;
        }
        else
        {
            cout << "NO\n" ;
        }
        // cout << freq ;
    }
    return 0;
}
