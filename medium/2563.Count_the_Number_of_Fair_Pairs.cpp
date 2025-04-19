class Solution {
    public:    
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long pairs=0;
            //sort
            sort(nums.begin(), nums.end());
    
            //main
            for(int i=0; i<nums.size()-1; i++){
                int up_bound = upper_bound(nums.begin() + i + 1, nums.end(), upper-nums[i])-nums.begin();
                int low_bound = lower_bound(nums.begin() + i + 1, nums.end(), lower-nums[i])-nums.begin();
                pairs += (up_bound-low_bound);
            }
            return pairs;
        }
    };