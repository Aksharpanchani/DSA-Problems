class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res;
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        map<int, int> rank;
        int r = 1;
        for (int i = 0; i < sortedArr.size(); i++) {
            if (rank.find(sortedArr[i]) == rank.end()) {
                rank[sortedArr[i]] = r++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            res.push_back(rank[arr[i]]);
        }
        return res;
    }
};