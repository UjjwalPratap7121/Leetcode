class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int currentMax = nums[0];
        int globalMax = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            // currentMax is either the current number itself,
            // or the current number added to the previous currentMax
            currentMax = max(nums[i], currentMax + nums[i]);

            // globalMax is the maximum of globalMax and currentMax
            globalMax = max(globalMax, currentMax);
        }

        return globalMax;
    }
};
