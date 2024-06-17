class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long long int ans = 0;
        int res;

        while (temp != 0) {
            res = temp % 10;
            ans = (ans * 10) + res;
            temp /= 10;
        }

        if (ans > pow(2,31)-1 || ans < -pow(2,31)) {
            ans = 0;
        }

        return ans;
    }
};