class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // create ans
        vector<int> ans;
        // for length of nums
        for (int i=0; i<nums.size();i++){
            ans.insert(ans.begin()+i,nums[nums[i]]);
        }
        // save nums in ans
        return ans;
    }
};