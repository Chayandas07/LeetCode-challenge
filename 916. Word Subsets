class Solution {
public:
    array<int, 26>frequency(string w){
        array<int, 26>freq={0};
        for(const char& c:w)
            freq[c-'a']++;
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        array<int,26>max_freq={0};
        for(const string& b:words2){
            array<int,26>freq=frequency(b);
            for(int i=0;i<26;i++)
                max_freq[i]=max(max_freq[i],freq[i]);
        }
        for(const string& a:words1){
            array<int,26>freq=frequency(a);
            bool uni=true;
            for(int i=0;i<26;i++){
                if(freq[i]<max_freq[i]){
                    uni=false;
                    break;
                }
            }
            if(uni)
                res.push_back(a);
        }
        return res;
    }
};
