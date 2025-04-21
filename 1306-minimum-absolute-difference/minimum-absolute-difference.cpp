class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin() , arr.end());

        int mini = INT_MAX;

        vector<vector<int>> result;

        for(int i=0;i<arr.size()-1;i++)
        {
           mini = min(mini , arr[i+1] - arr[i]);

        }
        for(int j = 0;j<arr.size()-1 ; j++)
        {
            if(arr[j+1] - arr[j] == mini)
            {
                result.push_back({arr[j] , arr[j+1]});
            }
        }
        return result;
        
    }
};