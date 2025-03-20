class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int t=0;
        for(int i=0;i<points.size()-1;i++)
        {
            vector<int> first = points[i];
            vector<int> sec = points[i+1];
            int x = abs(sec[0] - first[0]);
            int y = abs(sec[1] - first[1]);

            if(x>y)
                t += x;
            else
                t += y;
        }
        return t;
        
    }
};