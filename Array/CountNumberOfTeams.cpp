class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count=0;
        int n=rating.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((rating[i] < rating[j] && rating[j] < rating[k])||
                    (rating[i] > rating[j] && rating[j] > rating[k])) count++;
                }
            }
        }


        return count;
    }
};

//-----------Optimised--------------------
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int total = 0;
        int n=rating.size();
        for ( int i = 0 ; i < n ; i ++ ){
            int right_less = 0 , right_more = 0 , left_less = 0 , left_more = 0;

            for ( int j = i + 1 ; j < n ; j ++ ){
                if ( rating[j] < rating[i] ) right_less++;
                else if ( rating[i] < rating[j] ) right_more++;
            }
            for ( int j = 0 ; j < i ; j ++ ){
                if ( rating[j] < rating[i] ) left_less++;
                else if ( rating[i] < rating[j] ) left_more ++;
            }

            total += right_less*left_more + right_more*left_less;
        }

        return total;
    }
};