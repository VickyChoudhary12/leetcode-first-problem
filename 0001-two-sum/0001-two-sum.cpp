class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int compliment=target-nums[i];
            if(mpp.find(compliment)!=mpp.end()){
                return {mpp[compliment],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};