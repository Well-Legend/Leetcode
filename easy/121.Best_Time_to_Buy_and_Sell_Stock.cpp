class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int diff=0, min=0, max=0, ans=0;
            for(int i=0; i<prices.size(); i++){
                if(prices[max]-prices[i]>diff){
                    min=i;
                    max=i;
                }
                if(prices[i]-prices[min]>diff){
                    max=i;
                }
                diff=prices[max]-prices[min];
                if(diff>ans){
                    ans=diff;
                }
            }
            return ans;
        }
    };