class Solution {
public:
    int myAtoi(string s) {
        int ans=0,i=0, sn=1;
        int max=INT_MAX;
        int min=INT_MIN;
        if(s.length()==0)
        return 0;

        while(i<s.size() && s[i]== ' '){
            i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+') )
        {
            if(s[i]=='-'){
            sn=-1;
        }
        i++;
        }
            while(i<s.length() && s[i]-'0'<=9 && s[i]-'0'>=0){
            int digit = s[i]-'0';
            if(ans>max/10 || (ans==max/10 && digit>max%10)){
                return (sn == 1) ? max : min;            
            }
            ans=ans*10+digit;
            i++;
        }
        return ans*sn;
    }
};