#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i =1;i<=32;i++)
    {
        n=n>>1;
        // f = f << i;
        if(n&1!=0)
            count++;
        
    }
    cout <<endl<< count;
    return 0;
}