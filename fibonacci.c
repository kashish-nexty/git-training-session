#include <stdio.h>

//Driver Code Ends
int nthFibonacci(int n) {
  
    // base cases
    if (n <= 1) return n;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    // solving the smaller problems first
    // and finally solving the complete problem
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
//Driver Code Starts

int main() {
    int n = 12;
    int result = nthFibonacci(n);
    printf("%d", result);
    return 0;
}
