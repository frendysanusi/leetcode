class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size()) {
            for (int j = i; j < nums.size(); j++) {
                if (j != i) {
                    if (target - nums[i] == nums[j]) {
                        return {i, j};
                    }
                }
            }
            i++;
        }
        return {};
    }
};