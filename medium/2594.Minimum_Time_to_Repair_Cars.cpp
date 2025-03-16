class Solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long left=1, min_rank=200;
            long long right, mid;
            for(int i=0; i<ranks.size(); i++){
                if(min_rank>ranks[i])
                    min_rank = ranks[i];
            }
            right = (long long)min_rank*cars*cars;

            while(left<right){
                mid = (left+right)/2;
                if(repairAll(ranks, cars, mid)){
                    right=mid;
                }
                else{
                    left=mid+1;
                }
            }
            return right;
        }
    
        bool repairAll(vector<int>& ranks, int cars, long long time){
            int finished_car=0;
            for(int i=0; i<ranks.size(); i++){
                long long tmp = time/ranks[i];
                long long ranked_car = sqrt(tmp);
                finished_car += ranked_car;
                if(finished_car>=cars)
                    return true;
            }
            
            return false;
        }
    };