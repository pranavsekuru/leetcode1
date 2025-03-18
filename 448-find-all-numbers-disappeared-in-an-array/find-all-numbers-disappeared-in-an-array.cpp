class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        set<int> un(nums.begin() , nums.end());
        vector<int> dn;

        int n = nums.size();
        for(int i=1;i<=n;i++)
        {
            if(un.count(i))
                continue;
            else
                dn.push_back(i);

        }
        return dn;
        

        
    }
};