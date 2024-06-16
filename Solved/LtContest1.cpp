/*  Given an integer array hours representing times in hours, return an integer denoting the number of pairs i, j where i < j and hours[i] + hours[j] forms a complete day.

A complete day is defined as a time duration that is an exact multiple of 24 hours.

For example, 1 day is 24 hours, 2 days is 48 hours, 3 days is 72 hours, and so on.  
*/

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        
        // int count = 0;
        // for(int i=0;i<hours.size();i++){
        //     for(int j=i+1;j<hours.size();j++){
        //         if((hours[i]+hours[j])%24==0){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        //-----Optimized Approach-----
        int count = 0;
        unordered_map<int,int> m;
        for(int i=0;i<hours.size();i++){
            m[hours[i]%24]++;
        }
        for(auto x:m){
            if(x.first==12){
                count+=x.second*(x.second-1)/2;
            }else{
                count+=x.second*m[24-x.first];
            }
        }
        return count;
    }
};