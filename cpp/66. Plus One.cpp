class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int lastIdx = digits.size() - 1;
        int currIdx = lastIdx;
        int temp;
        int leading = false;

        while (currIdx >= 0) {
            temp = digits[currIdx];
            if (currIdx == lastIdx) {
                temp++;
            }
            if (leading) {
                temp++;
            }
            if (temp == 10) {
                temp = 0;
                leading = true;
            }
            else {
                leading = false;
            }
            ans.push_back(temp);
            currIdx--;
        }
        if (leading) {
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};