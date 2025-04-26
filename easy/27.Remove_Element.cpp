class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            vector<int> ans;
            int cut=0, cnt=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=val){
                    ans.push_back(nums[i]);
                    cnt++;
                }
                else{
                    cut++;
                }
            }
            for(int i=0; i<cut; i++){
                nums.pop_back();
            }
            for(int i=0; i<ans.size(); i++){
                nums[i]=ans[i];
            }
            return cnt;
        }
    };