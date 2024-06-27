class Solution {
public:
    string shortestPalindrome(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        str = s + "$" + str;
        int n = str.size();
        vector<int> toaddstring(n);
        int i=1, j=0;
        while(i<n){
            if(str[i]==str[j]){
                j++;
                toaddstring[i] = j;
                i++;
            }else{
                if(j!=0)
                    j = toaddstring[j-1];
                else
                    i++;
            }
        }
        i = toaddstring[n-1];
        str = s.substr(i, s.size());
        reverse(str.begin(), str.end());
        return str+s;
    }
};