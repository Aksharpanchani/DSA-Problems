// Code for finding square root of a number not using sqrt() function
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i*i<=n){
        i++;
    }
    cout<<i-1;
    return 0;
}

// Count number of divisor.

class Solution{
public:
    int countFactors(int N){
        int count=0;
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                if(N/i==i){
                    count++;
                }
                else{
                    count+=2;
                }
            }
        }
        return count;
    }
};
