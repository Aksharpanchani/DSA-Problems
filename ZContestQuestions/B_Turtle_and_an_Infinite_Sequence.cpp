#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define umap unordered_map<ll, ll>
const ll mod = 1e9 + 7;
//-------Akshar---------
signed main() {
    ll tests;
    cin >> tests;
/// Wrong at 2 testcases
    while (tests--) 
    {
        ll nos, mx;
        cin >> nos >> mx;
        if (nos == 0) 
        {
            cout << (1LL << mx) - 1 << endl; 
        } else 
        {
            ll e = 0;
            ll add = 1; 
            for (ll i = 0; i <= 32; i++) {
                if (((1LL << i) & nos) == 0)
                {
                    if (add + i <= mx)
                     {
                        add += i;
                        e += (1LL << i);
                    } else {

                        break;
                    }
                }
            }
            nos += e;
            cout << nos << endl;
        }
    }
    return 0;
}