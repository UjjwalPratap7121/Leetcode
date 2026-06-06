class Solution {
public:
    int first_occurence(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mid;
        int index = -1;
        while (low <= high) {
            mid = low - (low - high) / 2;
            if (nums[mid] == target) {
                index = mid;
                high = mid - 1;
            } else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return index;
    }

    int last_occurence(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mid;
        int index = -1;
        while (low <= high) {
            mid = low - (low - high) / 2;
            if (nums[mid] == target) {
                index = mid;
                low = mid + 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int ind1 = first_occurence(nums, target);
        int ind2 = last_occurence(nums, target);
        return {ind1, ind2};
    }
};