#include <bits/stdc++.h>
using namespace std;
void ascending(long long int n, long long int arr[])
{
    // For ascending
    for(long long int i = 0; i<n-1 ; i++)
    {
        for(long long int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    for(long long int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void descending(long long int n, long long int arr[])
{
   // For Desending
       for(long long int i = 0; i<n-1 ; i++)
    {
        for(long long int j = i+1; j<n; j++)
        {
            if(arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    for(long long int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    //cout << endl;
}
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n], arrA[n], arrD[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
        arrA[i] = arr[i];
        arrD[i] = arr[i];
    }
    ascending(n,arrA);
    descending(n,arrD);
    return 0;
}
