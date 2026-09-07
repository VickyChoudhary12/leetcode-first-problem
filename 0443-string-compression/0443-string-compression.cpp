class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string ans="";
        int i=0;
        int write=0;
        while(i<n){
            char ch;
            ch=chars[i];
            int count=0;
            while(i<n && ch==chars[i]){
                count++;
                i++;
            }
            chars[write++]=ch;
            if(count>1){
                string num=to_string(count);
                for( char c: num){
                    chars[write++]=c;
                }
            }
        }
        return write;
    }
};