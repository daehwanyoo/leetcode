class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //create an array ans
        vector<int>ans;
        ans=nums;
        
        for(int i=0; i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
        
    }
};