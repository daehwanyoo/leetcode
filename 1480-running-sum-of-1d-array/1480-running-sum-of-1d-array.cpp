class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //for nums
        for(int i=0; i<nums.size();i++)
        {
            //if i is not 0, continue
            if(i==0) 
            {
                continue;
            }
            // else current num[i]+=nums[i-1] 
            else 
            {
                nums[i]+=nums[i-1];
            }
        }
        return nums;
    }
};