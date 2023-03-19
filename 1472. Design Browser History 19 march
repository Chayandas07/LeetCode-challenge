class WordDictionary {
public:
    vector<string> v;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        v.push_back(word);
    }
    
    bool search(string word) {
        int count=0;
        int n=word.size();
        for(int i=0; i<v.size(); i++){
            if(n==v[i].size()){
                for(int j=0; j<n; j++){
                    if(v[i][j]==word[j]||word[j]=='.'){
                        count++;
                    }
                    else{
                        count=0;
                        break;
                    }
                }
                if(count==n) return true;
            }
        }
        return false;
    }
};
