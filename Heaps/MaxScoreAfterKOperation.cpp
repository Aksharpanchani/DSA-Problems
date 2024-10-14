class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans = 0;
        priority_queue<int> pq(nums.begin(),nums.end());
       // for(auto &i: nums)pq.push(i);
        int x;
        while(k-- && !pq.empty()){
            x = pq.top();
            pq.pop();
            ans += x;
            if(ceil(x/3.0))pq.push(ceil(x/3.0));
        }
        return ans;
    }
};