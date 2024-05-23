class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
        int count = 0;
        
        // Count the number of places where the current element is greater than the next one
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        
        // The array can be sorted by rotating if there is at most one such place
        return count <= 1;
    }
};