class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0,area=0;
        int left=0,right=n-1;
        while(left<right){
            int width=right-left;
            area=min(height[left],height[right])*width;
            ans=max(ans,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};