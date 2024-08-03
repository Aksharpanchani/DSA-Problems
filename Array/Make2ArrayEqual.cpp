class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int n=target.size();
        if(n!=arr.size()) return false;

        for(int i=0;i<n;i++){
            if(target[i]==arr[i]) continue ;

            else return false;
        }
        return true;
    }
};