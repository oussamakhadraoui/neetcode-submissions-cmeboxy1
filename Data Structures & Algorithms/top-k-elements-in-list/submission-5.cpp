class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>rec;
        int n = nums.size();
        for(int i =0;i<n;i++){
            rec[nums[i]]++;
        }

        vector<int>result;
        vector<vector<int>>temp(n+1);
        for(auto&[key,val]:rec){
            temp[val].push_back(key);
        }
        for(int i =n;i>=0;i--){
            for(int x:temp[i]){
                result.push_back(x);
                if(result.size()==k)return result;
            }
        }
   
        return result;
    }
};
