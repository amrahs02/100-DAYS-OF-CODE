class Solution {
public:
    double solve(double x, int n) {
        if (n == 0) {
            return 1;                       // power of 0 is 1;
        }
        if (n == 1) {                       // power of 1 is that value
            return x;
        }

        double temp = myPow(x, n / 2);

        if (n % 2 == 0) {
            return temp * temp;
        } else {
            return temp * x * temp;
        }
    }
    double myPow(double x, int n) {
        double ans = solve(x, abs(n));
        if (n < 0) {
            return 1 / ans;
        }
        return ans;
    }
};