class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> avail;
        while (n != 1 && !avail.count(n)) {
            avail.insert(n);
            int temp = n;
            n = 0;
            while (temp != 0) {
                int res = temp % 10;
                n += (res*res);
                temp = (temp-res)/10;
            }
        }
        return n == 1;
    }
};