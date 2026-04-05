class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt1=0,cnt2=0;
        for( char c : moves){
            if(c=='U'){
                cnt1++;
            }
            else if(c=='D'){
                cnt1--;
            }
            else if(c=='L'){
                cnt2++;
            }
            else if(c=='R'){
                cnt2--;
            }
        }
        return (cnt1==0 && cnt2==0);
    }
};