#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:

    int LongestSubstringwithAtMostKDistinctCharacters(string s, int k) {
        int n = s.size();
        if(n*k==0) return 0;
        int left=0;
        int right=0;
        unordered_map<char,int> hashmap;
        int max_len=1;
        while(right<n){
            hashmap[s[right]] = right++;
            if(hashmap.size()==k+1){
                auto del_idx = min_element(hashmap.begin(),hashmap.end(),[](const pair<char,int>& m1, const pair<char,int>& m2){
                    return m1.second < m2.second;
                });
                left = del_idx->second + 1; // Corrected line
                hashmap.erase(del_idx->first);
            }
            max_len = max(max_len,right-left);
        }
        return max_len;
    }

};

int main(){
    solution s;
    cout<<s.LongestSubstringwithAtMostKDistinctCharacters("eceba",2);
    return 0;
}