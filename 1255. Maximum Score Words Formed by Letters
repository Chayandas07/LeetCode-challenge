class Solution {
public:
    int n;
    array<char, 26> freq;
    bool f(array<char, 26>& freq, int& point, string& w, vector<int>& score){
        for(char c: w){// time O(|w|)
            int idx=c-'a';
            freq[idx]--;
            point+=score[idx];
            if ( freq[idx]<0) return 0;
        }
        return 1;
    }
    int ans=0;
    void dfs(int i, array<char, 26>& left, int& point, vector<string>& words, vector<int>& score)
    {
        if (i==n) return ;
        array<char, 26> left0=left;
        int point0=point;
        if (f(left, point, words[i], score)){
            ans=max(ans, point);
            dfs(i+1, left, point, words, score);
        }
        dfs(i+1, left0, point0, words, score);//backtracking
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) 
    {
        n=words.size();
        freq.fill(0);
        for(char c: letters) 
            freq[c-'a']++;

        int point=0;
        dfs(0, freq, point, words, score);
        return ans;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
