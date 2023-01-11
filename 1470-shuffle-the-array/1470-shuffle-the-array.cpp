class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // declare vector
        vector<int> ans(nums.size(), 0);

        // for loop: for i=0 until it meets n
        for (int i=0;i<n;i++){
            // for consecutive index, save nums
            ans[i*2]=nums[i];
            ans[(i*2)+1]=nums[n+i];
        }

        // return vector ans
        return ans;
    }
};