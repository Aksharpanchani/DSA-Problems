int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    int count=0;
    int xor=0;
    for(int i=0;i<A.size();i++){
        xor^=A[i];
        if(xor==B){
            count++;
        }
        if(mp.find(xor^B)!=mp.end()){
            count+=mp[xor^B];
        }
        mp[xor]++;
    }
    return count;
}