class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> rt;
        int sq;
        for(int i=0;i<nums.size();i++)
        {
            sq = nums[i] * nums[i];
            rt.push_back(sq);
            sq = 0;
        }
       sort(rt.begin() , rt.end());

        return rt;
        
    }
};