class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0,right=0;
        int len=0;
        vector<int> hash(256,-1);
        while(right<n){
            if(hash[s[right]]!=-1){
                left=max(left,hash[s[right]]+1);
            }
            hash[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};