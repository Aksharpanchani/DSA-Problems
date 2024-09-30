class Solution {
public:
    int addDigits(int num) {
        // int temp=num;
        // int sum=0;
        // if(temp<10){
        //     return sum; 
        // }
        // temp=num%10;
        // sum = temp + num; 
        // return 0;
        int temp=num;
        int sum=0;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum<10){
            return sum;
        }
        return addDigits(sum);
    }
};