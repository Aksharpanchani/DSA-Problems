#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;

        for(auto it:nums){  
            sum+=it;
            maxi=max(sum,maxi);
            if(sum>maxi) maxi=sum;
            if(sum<0) sum=0;
        }
        return maxi;
    }
}; 

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};  // Input array
    Solution sol;  // Create an instance of Solution class

    int maxSum = sol.maxSubArray(nums);  // Call the method with the vector

    cout << "Maximum Subarray Sum is: " << maxSum << endl;  // Output the result

    return 0;
}