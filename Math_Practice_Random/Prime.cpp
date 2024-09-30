class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==2) return 1;
        
        if(N==1) return 0;
        else if(N<1) return 0;
        
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0) {return 0;
            }
        }
        return 1;
        
    }
};