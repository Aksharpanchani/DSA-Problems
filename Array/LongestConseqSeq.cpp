class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        int count = 1; //count 1 because if the vector is not empty that means it should atleast have one element.
        int maxi = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                continue;  
            }

            if(nums[i] == nums[i-1] + 1) {
                count++;
            } else {
                count = 1; 
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};
