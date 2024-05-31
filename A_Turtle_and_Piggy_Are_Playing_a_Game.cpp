#include <iostream>
#include <cmath> // Include cmath for log2 and floor
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int l, r;
        cin >> l >> r;
        
        // Compute the floor of log base 2 of r
        int result = floor(log2(r));
        
        // Output the result
        cout << result << endl;
    }   
    return 0;
}
