#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    long long int arrA[n];
    long long int arrD[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
        arrA[i] = arr[i];
        arrD[i] = arr[i];
    }
    sort(arrA, arrA+n);
    sort(arrD, arrD+n, greater<int>());
    for(int i = 0; i<n; i++)
    {
        cout << arrA[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arrD[i] << " ";
    }
    cout << endl;
    return 0;
}
