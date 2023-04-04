class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int g=1;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                g++;
                st.clear();
                st.insert(s[i]);
            }
            else {
                st.insert(s[i]);
            }
        }
        return g;
    }
};
