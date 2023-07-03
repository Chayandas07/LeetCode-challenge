class Solution {
public:
    bool buddyStrings(string s, string goal) {
         int ns=s.size(),ng=goal.size();
        if(ns != ng ) {
            return 0;
        }
        if(s == goal ) {
            vector<int>farr(26,0);
            for(auto &x:s){
                farr[x-'a']++;
                if(farr[x-'a']==2)
                return true;
            }
            return false;;
        }
        vector<int> ans;
        for(int i=0;i<ns;i++)
        {
            if(s[i] != goal[i]) {
                ans.push_back(i);
            }
            if(ans.size()>2)
            return false;
        }
        
        return  ans.size()==2&&s[ans[0]]==goal[ans[1]] && s[ans[1]]==goal[ans[0]];
    }
};
