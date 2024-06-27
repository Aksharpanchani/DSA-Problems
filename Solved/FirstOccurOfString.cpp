class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=haystack.size();
       int m=needle.size();
      
       for(int i=0;i<=n-m;i++){
       if(haystack.substr(i,m)==needle) return i;
       }
         if (n < m) {
            return -1;
        }
         if (m==0) {
            return 0;
        }
        return -1;
    }
};