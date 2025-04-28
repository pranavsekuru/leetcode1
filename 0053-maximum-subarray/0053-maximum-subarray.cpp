class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=0;
        //vector<int>dp;
        for(int i=1;i<nums.size();i++)
        {
            n = nums[i] + nums[i-1];
            nums[i] = max(n , nums[i]);
        }
        int max_term =  *max_element(nums.begin() , nums.end());
       
        return max_term;
        
    }
};