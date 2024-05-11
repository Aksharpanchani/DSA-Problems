class Solution {
public:
    int m= 1e9+7;
long long myPow(long long x, long long n) {
    long long ans = 1LL; // Initialize ans with an integer value
    long long n1 = n;
    while (n1 > 0) {
        if (n1 % 2 == 1) {
            ans = (ans * x) % m; // Update ans while taking modulo m
            n1 -= 1;
        } else {
            n1 /= 2;
            x = (x * x) % m; // Update x while taking modulo m
        }
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long count4 = n/2;
        long long count5 = n - count4;
        long long ans = ((myPow(4LL,count4)% m * myPow(5LL,count5)% m) % m);
        return ans;
    }
};