class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int n = nums.size();
        int start = -1, end = -1;

        // To find 1st Occur
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                start = i;
                break;
            }
        }

        // Find last Occur
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                end = i;
                break;
            }
        }

        // If target not found, start and end= -1
        if (start == -1) {
            return {-1, -1};
        }
        
        return {start, end};
    }
};