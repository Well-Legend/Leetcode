class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int pairs = (nums.size())/2;
            int cnt[510]={0};
            int pair_cnt=0;
            for(int i=0; i<nums.size(); i++){
                cnt[nums[i]]++;
                if(cnt[nums[i]]%2==1)
                    pair_cnt++;
            }
            if(pair_cnt<=pairs){
                return true;
            }
            return false;
        }
    };