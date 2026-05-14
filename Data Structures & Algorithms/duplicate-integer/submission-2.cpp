class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size(), i = 0, j = 1, count = 0;

        sort(nums.begin(), nums.end());
        while(i < n && j < n) {
            if(nums[i] == nums[j]) {
                count = 1;
                break;
            } else {
                count = 0;
                i++;
                j++;
            }
        }

        return count == 0 ? false : true;
    }
};