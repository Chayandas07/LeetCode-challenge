class Trie {
public:

unordered_map<string,int>mpp,mp;
    Trie() {
        
    }
    
    void insert(string word) {
        mpp[word]++;
        string s;
        for(auto it : word)
        {
            s.push_back(it);
            if(mp[s]==0) mp[s]++;
        }
    }
    
    bool search(string word) {
        if(mpp[word]) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        if(mp[prefix]) return true;
        return false;
    }
};
