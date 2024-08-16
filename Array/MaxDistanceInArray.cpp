class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minVal = arrays[0][0];
        int maxVal = arrays[0][arrays[0].size() - 1];
        int maxDistance = 0;
        
        for (int i = 1; i < arrays.size(); ++i) {
            maxDistance = max(maxDistance, max(abs(arrays[i][arrays[i].size() - 1] - minVal), abs(maxVal - arrays[i][0])));
            
            minVal = min(minVal, arrays[i][0]);
            maxVal = max(maxVal, arrays[i][arrays[i].size() - 1]);
        }
        
        return maxDistance;
    }
};
