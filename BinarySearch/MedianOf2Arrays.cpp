class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> nums3;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(nums3));
       
        int k=nums3.size();
        if(k%2==0){
            double median = (nums3[k/2 -1] + nums3[k/2])/2.0; 
            return median;
        }
        return (double)nums3[k/2];
    }
};