#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(), l=0,  r=n-1;
        vector<int> ans(n);
        for(int i=n-1; i>=0; i--){
            int xl=nums[l]*nums[l], xr=nums[r]*nums[r];
            if (xl>xr){
                ans[i]=xl;
                l++;
            }
            else{
                ans[i]=xr;
                r--;
            }
        }
        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();