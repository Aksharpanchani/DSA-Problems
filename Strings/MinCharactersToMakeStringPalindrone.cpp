int Solution::solve(string A) {
    int n = A.length();

        int l = n/2, r = n/2;

        if(n%2 == 0){
            l--;
        }
        while(l >= 0) {
            if(A[r] == A[l]) {
                l--;
                r++;
            }else {
                r--;
            }
        }
        return (n-r);

    }
