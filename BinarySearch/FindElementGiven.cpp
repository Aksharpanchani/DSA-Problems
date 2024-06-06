#include <bits/stdc++.h>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Simple standard approach-----------------------------------------------
        for(auto i:nums){
            if(nums[i]==target) return i;
        }
        return -1;
       //----------New Approach-----------------------
        // auto it = find(nums.begin(), nums.end(), target);
        // if (it != nums.end()) {
        //     return distance(nums.begin(), it);
        // }
        // return -1;
    }
};