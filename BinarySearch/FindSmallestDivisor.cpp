class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1, j=INT_MAX;
        while(i<j){
            int mid=i+(j-i)/2;
            int cnt=0;
            for(auto it: nums){
                cnt+=(it/mid)+(it%mid!=0);
            }
            if(cnt>threshold){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return i;
    }
};


// -- Optimal Approach---
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      
        int left = 1, right = 1e6, m, sum; //1e6 as max number can be 1e6
        while (left < right) {
            m = (left + right) / 2, sum = 0;
            for (int e : nums)
                sum += (e + m - 1) / m; //To get ceil add m-1
            if (sum > threshold) // If sum is big need to increase divisor
                left = m + 1;    // look for left side
            else
                right = m;
        }
        return left;        
    }
};