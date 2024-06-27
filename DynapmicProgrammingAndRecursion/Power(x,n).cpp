class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long n1=n;
        if(n1<0)
        n1=n1*(-1);

        while(n1>0)
        {
            if(n1%2==1)
            {
                ans*=x;
                n1-=1;
            }
            else{
                n1 /= 2;
                x *= x;
            }
        }
        if(n<0)
        return (double)1.0/ans;

      return ans;
    }
};