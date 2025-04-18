class Solution {
public:
    string ans="";
    bool found=false;
    void fn(string &temp,int n){
        if(found)return;
        if(n==1){
            ans=temp;
            found=true;
            return;
        }

        char pre=temp[0];
        string s=temp;
        string str="";
        int cnt=1;
        for(int i=1;i<temp.length();i++){
            if(temp[i]==pre){
                cnt++;
            }else{
                str+=to_string(cnt);
                str+=pre;
                cnt=1;
            }
            pre=temp[i];
        }
        str+=to_string(cnt);
        str+=pre;
        fn(str,n-1);
    }
    string countAndSay(int n) {
        string temp="1";
        fn(temp,n);
        return ans;
    }
};
