class Solution {
public:
    string getPermutation(int n, int k) {
        long long f =1; //factorial
        string ans = "";
        k=k-1;
        vector<int> num;
        for(int i=1;i<n;i++)
        {
            f=f*i;
            num.push_back(i);
        }
        num.push_back(n);
        while(true){
            ans+= to_string(num[k/f]);
            num.erase(num.begin()+k/f);
            if(num.size()==0)
            break;

            k=k%f;
            f/=num.size();
        }
        return ans;
    }
};