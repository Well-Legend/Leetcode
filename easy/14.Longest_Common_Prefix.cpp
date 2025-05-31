class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1; i<strs.size(); i++){
            string prefix;
            for(int j=0; j<strs[i].size(); j++){
                if(ans[j]==strs[i][j]){
                    prefix += strs[i][j];
                }
                else{
                    break;
                }
            }
            ans=prefix;
        }
        return ans;
    }
};