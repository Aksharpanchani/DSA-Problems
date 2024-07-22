#include <bits/stdc++.h>
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> m;
        int h=heights.size();
        vector<string> res(h);
        int n=names.size();
        for(int i=0;i<n;i++){
            m[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        int indx=0;
        for(int i=h-1;i>=0;i--){
           res[indx]=m[heights[i]];
           indx++;
        }
        return res;
    }
};