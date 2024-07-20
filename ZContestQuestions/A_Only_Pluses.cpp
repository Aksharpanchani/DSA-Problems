#include <bits/stdc++.h>
using namespace std;

long long solve(int a, int b, int c) {
    return static_cast<long long>(a) * b * c;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxop = 5;
        
        vector<int> nums = {a, b, c};
        while (maxop--) {
            sort(nums.begin(), nums.end());
            nums[0]++; 
        } 
        long long maxp = solve(nums[0], nums[1], nums[2]);
        cout << maxp << endl;
    }
    return 0;
}
