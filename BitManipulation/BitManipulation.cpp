// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int ss(int n)
{
    if(n == 0)
    return 0;
    
    int x=1;
    while(2*x <= n)
    {
        x = x<<1;
    }
    
    return x+ss(n^(x|x>>1));
}

int main() {
    int n;
    cin >> n;
    cout << ss(n)<<endl;
    return 0;
}