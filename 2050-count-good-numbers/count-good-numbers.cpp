class Solution {
public:
    int MOD = 1000000007;
    long long powmod(long long a, long long b) {
    if (b == 0) return 1;
    long long half = powmod(a, b / 2);
    long long result = (half * half) % MOD;
    if (b % 2 == 1) result = (result * a) % MOD;
    return result;
}
    int countGoodNumbers(long long n) {
        
        return (powmod(5, (n/2) +n%2) * powmod(4, floor(n/2))) % MOD;
        
    }
};