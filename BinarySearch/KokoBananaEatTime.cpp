class Solution {
public:
    int maxi(vector<int>& piles){
        int ans=0;
        for(int i=0;i<piles.size();i++){
            ans = max(ans,piles[i]);
        }
        return ans;
    }
    int hours(vector<int>& piles, int mid){
        int ttl=0;
        for(int i=0;i<piles.size();i++){
            ttl+= ceil((double) piles[i]/(double)mid);
        }
        return ttl;
    } /////////-------------Can use the commented part tht is easy to understand/////////
    int minEatingSpeed(vector<int>& piles, int h) {
      //  sort(piles.begin(),piles.end());
        int low=1;
       int high=maxi(piles);
     //   int high = piles[piles.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            int reqt=hours(piles,mid);
            if(reqt<=h)
            high=mid-1;

            else low=mid+1;
        }
       
        return low;
    }
};
//------Appraoch 2-----------------//
class Solution {
public:
    
    int findMax(vector<int> &piles) {
    int maxi = INT_MIN;
    int n = piles.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &piles, int hourly) {
    int totalH = 0;
    int n = piles.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(piles[i]) / (double)(hourly));
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
             int low = 1, high = findMax(piles);

    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(piles, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;

    }
};


//-------Other method-----------------//
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            int hours = 0;
            for (int p : piles) {
                hours += (p + mid - 1) / mid; // Round up p/mid
            }
            if (hours <= h) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};