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