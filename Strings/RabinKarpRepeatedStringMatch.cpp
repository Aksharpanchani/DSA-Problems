class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size();
        int m=b.size();
        int ans=1;
        string s=a;
        while(s.size()<m){
            s+=a;
            ans++;
        }
        //-----Just Changing string::npos and using s.size() to compare...
        // if(s.find(b)!=string::npos) return ans;
        // s+=a;                      
        // if(s.find(b)!=string::npos) return ans+1;

        if (s.find(b) < s.size()) return ans;
        s += a;
        if (s.find(b) < s.size()) return ans + 1;
        return -1;      
    }
};