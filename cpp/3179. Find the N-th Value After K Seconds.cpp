class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        const int MOD = 1'000'000'007;
        vector<int> arr(n, 1);
        for (int i = 0; i < k; i++) {
            int temp = 0;
            for (int j = 0; j < n; j++) {
                temp = (temp + arr[j]) % MOD;
                arr[j] = temp;
            }
        }
        return arr[n-1];
    }
};