#include<bits/stdc++.h>
using namespace std;
int main()
{   int arr[10],n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout <<"Enter the elements of the array:\n";
    for(int i =0;i<n;i++)
        cin >> arr[i];
    cout <<"The non double occuring element is: ";
    int ans = 0;
    for(int i = 0;i<n;i++)
        ans=ans^arr[i];
    cout << ans;
    return 0;
}