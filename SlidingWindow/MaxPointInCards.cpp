class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0;
        int k1=k,k2=k;
       int maxc=0;
        for(int i=0;i<k1;i++){
            lsum+= cardPoints[i];
        }
            maxc=lsum;
        int i=k-1;
        int rindx= cardPoints.size()-1;
        while(i>=0){
            lsum-= cardPoints[i];
            rsum+= cardPoints[rindx];
            rindx--;
            i--;
            maxc=max(maxc,rsum+lsum);
        }

        return maxc;

    }
};