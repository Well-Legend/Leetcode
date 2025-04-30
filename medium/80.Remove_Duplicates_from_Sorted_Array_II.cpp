class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int k=1, cnt=1;
            for(int i=1; i<nums.size(); i++){
                cnt++;
                if(nums[i]!=nums[i-1]){
                    nums[k]=nums[i];
                    k++;
                    cnt=1;
                }
                else if(cnt==2){
                    nums[k]=nums[k-1];
                    k++;
                }
            }
            return k;
        }
    };