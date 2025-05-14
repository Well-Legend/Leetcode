class RandomizedSet {
    private:
        unordered_map<int, int> sets;//<value, data_index>
        vector<int> data;
        int index;
    public:
        RandomizedSet() {
            index=0;
        }
        
        bool insert(int val) {
            if(sets.contains(val)){
                return false;
            }
            sets[val]=index;
            data.push_back(val);
            index++;
            return true;
        }
        
        bool remove(int val) {
            if(sets.contains(val)==false){
                return false;
            }
            int finds = sets[val];
            data[finds]=data[--index];
            data.pop_back();
            sets[data[finds]]=finds;
            sets.erase(val);
            return true;
        }
        
        int getRandom() {
            int idx = rand() % sets.size();
            return data[idx];
        }
    };
    
    /**
     * Your RandomizedSet object will be instantiated and called as such:
     * RandomizedSet* obj = new RandomizedSet();
     * bool param_1 = obj->insert(val);
     * bool param_2 = obj->remove(val);
     * int param_3 = obj->getRandom();
     */