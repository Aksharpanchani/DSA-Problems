class Solution
{
	public:
		long sum_of_ap(long n,long a, long d)
		{
		    // Code here.
		 long sum=0;
		    int i=0;
		    while(i<n){
		        sum+=a;
		        a+=d;
		        i++;
		    }
		    return sum;
		}
};

//SUm of GP= a(r^n-1)/(r-1) for r!=1 and n!=0 and a!=0 even if r=1
// List all formula related to Geometric progression
// Sum = a*(pow(r,n)-1)/(r-1); // if r!=1 and n!=0
// Sum = a*(1-pow(r,n))/(1-r); // if r!=1 and n!=0 
// infinite sum = a/(1-r); // if r<1
// infinite sum = a/(r-1); // if r>1
// Nth term of GP = a*pow(r,n-1); // if r!=1 and n!=0

float sumOfGP(float a, float r, int n)
{
    float sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}