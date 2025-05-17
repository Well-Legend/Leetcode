class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> ans, pre_prod, suf_prod;
            pre_prod.push_back(nums[0]);
            for(int i=1; i<nums.size(); i++){
                int product = pre_prod[i-1] * nums[i];
                pre_prod.push_back(product);
            }
            suf_prod.push_back(nums.back());
            for(int i=nums.size()-2; i>=0; i--){
                int product = suf_prod[nums.size()-2-i] * nums[i];
                suf_prod.push_back(product);
            }
    
            for(int i=0; i<nums.size(); i++){
                int output, size=nums.size();
                if(i==0){
                    output = suf_prod[size-2-i];
                    
                }
                else if(i==nums.size()-1){
                    output = pre_prod[i-1];
                }
                else{
                    output = pre_prod[i-1] * suf_prod[size-2-i];
                }
                ans.push_back(output);
            }
            return ans;
        }
    };