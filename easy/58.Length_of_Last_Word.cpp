class Solution {
    public:
        int lengthOfLastWord(string s) {
            int cnt=0, ans=0;
            for(int i=0; i<s.length(); i++){
                if(s[i]==' '){
                    cnt=0;
                }
                else{
                    cnt++;
                    ans=cnt;
                }
            }
            return ans;
        }
    };