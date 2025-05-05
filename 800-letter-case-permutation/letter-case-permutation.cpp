class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        int n = s.size();
        vector<int>idx;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                idx.push_back(i);
            }
        }
        vector<string>ans;
        string temp = s;
	for(int i =0;i<=(1 << idx.size()) - 1; i++){
            
            for(int j=0;j<idx.size();j++){
                if((i&(1<<j))!=0){
                if(islower(s[idx[j]])){
                    s[idx[j]]=toupper(s[idx[j]]);
                }
                else s[idx[j]]=tolower(s[idx[j]]);
                }

            }
            ans.push_back(s);
            s=temp;
        }
       
        return ans;
    }
};