class Solution {
public:
    bool isLower(char c) { return c >= 'a' && c <= 'z'; }
    char processStr(string s, long long k) {
        long long len = 0;
        for (auto c : s) {
            if (isLower(c))
                len++;
            else if (c == '*' && len > 0)
                len--;
            else if (c == '#')
                len *= 2;
        }
        if (k >= len)
            return '.';

        for (int i = s.size() - 1; i >= 0; --i) {
            char c = s[i];
            if (isLower(c)) {
                if (k == len - 1)
                    return c;
                len--;
            } else if (c == '*')
                len++;
            else if (c == '#') {
                len /= 2;
                if (k >= len)
                    k -= len;
            } else if (c == '%') {
                k = len - 1 - k;
            }
        }
        return '.';
    }
};
