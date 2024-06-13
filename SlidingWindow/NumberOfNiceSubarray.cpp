// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n = nums.size();
//         int left = 0, count = 0, result = 0, oddCount = 0;

//         for (int right = 0; right < n; right++) {
//             if (nums[right] % 2 == 1) {
//                 oddCount++;
//             }

//             while (oddCount > k) {
//                 if (nums[left] % 2 == 1) {
//                     oddCount--;
//                 }
//                 left++;
//             }

//             if (oddCount == k) {
//                 count = 0;
//                 while (oddCount == k) {
//                     if (nums[left] % 2 == 1) {
//                         oddCount--;
//                     }
//                     left++;
//                     count++;
//                 }
//             }

//             result += count;
//         }

//         return result;
//     }
// };

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }

private:
    int atMostK(const vector<int>& nums, int k) {
        int left = 0, result = 0;
        for (int right = 0; right < nums.size(); ++right) {
            k -= nums[right] % 2;
            while (k < 0) {
                k += nums[left] % 2;
                left++;
            }
            result += right - left + 1;
        }
        return result;
    }
};