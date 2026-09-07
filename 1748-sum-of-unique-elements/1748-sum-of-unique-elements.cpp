class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums){
            mpp[num]++;
        }
        int total=0;
        for( auto it : mpp){
            if(it.second==1){
                total+=it.first;
            }
        }
        return total;
    }
};