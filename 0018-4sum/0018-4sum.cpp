class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1;
                int right=n-1;
            while(left<right){
                long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                if(sum==target){
                    st.insert({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<target){
                    left++;
                }else{
                    right--;
                }
            }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};