class Solution {
public:
    map<string,int> m;
    bool cal(string &str,int idx,int cnt)
    {
        if(idx==str.size())
            return cnt>1;   // check atleat two string are concate
        string tmp="";
        for(int i=idx;i<str.size();i++)
        {
            tmp+=str[i];
            if(m.find(tmp)!=m.end())
            {
                // if string found then check with next index
                bool flag=cal(str,i+1,cnt+1);
                if(flag)
                    return true;
            }
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        for(auto x:words)
            m[x]++;
        vector<string> ans;
        for(auto x:words)
        {
            bool flag=cal(x,0,0);
            // if given string satisfy the condition then add it to our answer
            if(flag)
                ans.push_back(x);
        }
        return ans;
    }
};
