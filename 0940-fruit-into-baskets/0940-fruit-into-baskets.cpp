class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int last = -1 , slast = -1;
        int lc = 0 , curr = 0, maxf = 0;

        for(int fruit : fruits)
        {
            if(fruit == last || fruit == slast)
            {
                curr++;
            }
            else
            {
                curr = lc + 1;
            }
            if(fruit == last)
                lc++;
            else
            {
                lc = 1;
                slast = last;
                last = fruit;
            }

            maxf = max(maxf , curr);

        }
        return maxf;
    }
};