class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if (n == 0) {
            return ans;
        }
        int first = nums[0];
        int prev = nums[0];
        int single = true;
        for (int i = 1; i < n; i++) {
            if (nums[i] != prev+1) {
                if (single) {
                    ans.push_back(to_string(prev));
                }
                else {
                    string temp = to_string(first) + "->" + to_string(prev);
                    ans.push_back(temp);
                }
                first = nums[i];
                single = true;
            }
            else {
                single = false;
            }
            prev = nums[i];
        }
        if (single) {
            ans.push_back(to_string(nums[n-1]));
        }
        else {
            string temp = to_string(first) + "->" + to_string(nums[n-1]);
            ans.push_back(temp);
        }
        return ans;
    }
};