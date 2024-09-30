class Solution {
  public:
    int count3DivNums(long long L, long long R) {
        int count = 0;
        for (long long i = L; i <= R; i++) {
            int div = 0;
            for (long long j = 1; j <= i; j++) {
                if (i % j == 0) {
                    div++;
                }
            }
            if (div == 3) {
                count++;
            }
        }
        return count;

    }
};
//Optimize the code
class Solution {
  public:
    int count3DivNums(long long L, long long R) {
        int count = 0;
        for (long long i = L; i <= R; i++) {
            int div = 0;
            for (long long j = 1; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    if (i / j == j) {
                        div++;
                    } else {
                        div += 2;
                    }
                }
            }
            if (div == 3) {
                count++;
            }
        }
        return count;

    }
};