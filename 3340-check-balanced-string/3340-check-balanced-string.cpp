class Solution {
public:
    bool isBalanced(string num) {
        int n=num.size();
        int sum1=0,sum2=0;
        int i=0,j=1;
        while(i<n){
            sum1=sum1+num[i]-'0';
            i=i+2;
        }
        while(j<n){
            sum2=sum2+num[j]-'0';
            j=j+2;
        }
        return sum1==sum2;
    }
};