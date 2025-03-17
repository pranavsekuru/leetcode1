class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> un(nums.begin(),nums.end());
        
        if(un.size() != nums.size())
            return true;
        else
            return false;
    }
};