class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans,count=0;
        ans= start^goal;
        for(int i=0;i<32;i++){
            if(ans & (1<<i))
            count++;
        }
        return count;
    }
};