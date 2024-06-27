/*
Run length encoding  is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".
*/


class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t="";
            s+='$';
            int c=1;
            for(int j=1;j<s.size();j++){
                if(s[j]!=s[j-1]){
                    t+=to_string(c);
                    t+=s[j-1];
                    c=1;
                }
                else c++;
            }
            s=t;
        }
        return s;


    }
};