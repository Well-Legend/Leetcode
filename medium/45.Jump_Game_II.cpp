class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> jump_position;
        jump_position.push_back(nums.size()-1);
        int cnt=0;
        for(int i=nums.size()-2; i>=0; i--){
            for(int j=0; j<=cnt; j++){
                if(i+nums[i]>=jump_position[j]){
                    cnt=j+1;
                    if(j == jump_position.size()-1){
                        jump_position.push_back(i);
                    }
                    else{
                        jump_position[j+1]=i;
                    }
                    break;
                }
            }
        }
        return cnt;
    }
};