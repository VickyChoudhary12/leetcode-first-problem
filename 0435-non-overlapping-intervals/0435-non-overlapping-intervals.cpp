class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto& a,auto& b){
            return a[1]<b[1];
        });
        int cnt=0,prev=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<prev){
                cnt++;
            }
            else{
                prev=intervals[i][1];
            }
        }
        return cnt;
    }
};