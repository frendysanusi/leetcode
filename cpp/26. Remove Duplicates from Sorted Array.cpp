class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int idx = 1;
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == prev) {
            }
            else {
                nums[idx] = nums[i];
                prev = nums[i];
                idx++;
                cnt++;
            }
        }
        return cnt;
    }
};