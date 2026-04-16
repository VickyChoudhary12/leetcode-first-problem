class Solution {
public:
    void reverse(string &res){
        int i=0;
        int j=res.size()-1;
        while(i<j){
            swap(res[i],res[j]);
            i++;
            j--;
        }
    }
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0') > (num[i]-'0')){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        while(res.size()!=0 && res.back()=='0'){
            res.pop_back();
        }
        reverse(res);
        if(res.empty()) return "0";
        return res;
    }
};