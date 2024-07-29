//------------Catalan Numbers
//------------Number of unique BSTs that can be formed with n nodes
//------------Catalan(n)=C(2n,n)/(n+1)
//------------Catalan(n)=Catalan(n-1)*(2*(2n+1)/(n+2))


class Solution {
public:
    int numTrees(int n) {

        long double ans = 1;

        for (int k = 2; k <= n; k++) {
            ans *= (n + k);
            ans /= k;
        }

        return ans;
    }
};