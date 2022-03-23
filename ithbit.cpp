#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=1;
    cout << "Enter n and i:\n";
    cin >> n >> i;
    f=f<<i;
    int ans = f & n;
    if(ans==0)
        cout<< i << "th bit is not set";
    else
        cout<< i << "th bit is set";
    return 0;
}