class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
         vector<long long> res;
        long long int a = A, b = B;
        while (b != 0) {
            long long int temp = b;
            b = a % b;
            a = temp;
        }
        res.push_back(A * B / a);
        res.push_back(a);
        return res;
        
    }
};