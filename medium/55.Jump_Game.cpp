class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int goal = nums.size()-1;
            bool ans = false;
            for(int i=nums.size()-2; i>=0; i--){
                if(i+nums[i]>=goal){
                    goal = i;
                }
            }
            if(goal==0){
                ans = true;
            }
            return ans;
        }
    };