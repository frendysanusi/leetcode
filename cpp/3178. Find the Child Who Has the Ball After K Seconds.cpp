class Solution {
public:
    int numberOfChild(int n, int k) {
        int curr = 0;
        int reverse = false;
        for (int i = 0; i < k; i++) {
            if (reverse) {
                curr--;
                if (curr == 0) {
                    reverse = false;
                }
            }
            else {
                curr++;
                if (curr == n-1) {
                    reverse = true;
                }
            }
        }
        return curr;
    }
};
