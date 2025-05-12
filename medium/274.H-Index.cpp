class Solution {
    public:
        int hIndex(vector<int>& citations) {
            int quote[1001]={0};
            int cnt=0;
            for(int i:citations){
                quote[i]++;
            }
            for(int i=1000; i>0; i--){
                cnt+=quote[i];
                if(cnt>=i){
                    return i;
                }
            }
            return 0;
        }
    };