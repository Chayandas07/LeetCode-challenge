class Solution {
public:
    bool solve(int x){
        string s=to_string(x);
        vector<int> vec(10,0);
        for(auto i:s){
            vec[i-'0']++;
        }
        for(auto i:s){
            int c=i-'0';
            if(c==0 || vec[c]!=c){
                return 0;
            }
        }
        return 1;
    }
    int nextBeautifulNumber(int n) {
        for(int i=n+1; ;i++){
            if(solve(i)){
                return i;
            }
        }
    }
};
