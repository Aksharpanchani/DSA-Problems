class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0, denominator = 1;
        int i = 0;
        while (i < expression.size()) {
            int sign = 1;
            if (expression[i] == '-') {
                sign = -1;
                i++;
            } else if (expression[i] == '+') {
                i++;
            }
            int num = 0;
            while (i < expression.size() && expression[i] != '/') {
                num = num * 10 + expression[i] - '0';
                i++;
            }
            num *= sign;
            i++;
            int den = 0;
            while (i < expression.size() && expression[i] != '+' && expression[i] != '-') {
                den = den * 10 + expression[i] - '0';
                i++;
            }
            numerator = numerator * den + num * denominator;
            denominator *= den;
        }
        int gcd = __gcd(abs(numerator), abs(denominator));
        return to_string(numerator / gcd) + "/" + to_string(denominator / gcd);
        
    }
};