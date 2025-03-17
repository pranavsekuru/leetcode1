class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size() , a = 0;
        for(int i=0;i<=n;i++)
        {   
            a = a+i;
        }
        return a - accumulate(nums.begin() , nums.end(),0);
        
    }
};