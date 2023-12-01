class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      int i = 0,j = 0,p_k1 = 0 , p_k2 = 0, p_i = 0 , p_j = 0;
      while(i<word1.size() and j < word2.size()){
          int k1 = 0 , k2 = 0;
          if(p_i == i) k1 = p_k1;
          if(p_j == j) k2 = p_k2;
          while(k1 < word1[i].size() and k2 < word2[j].size()){
            if(word1[i][k1] != word2[j][k2]) return false;
            k1++;
            k2++;
          }
          p_i = i;
          p_j = j;
          p_k1 = k1;
          p_k2 = k2;
          if(k1>=word1[i].size()) i++;
          if(k2>=word2[j].size()) j++;
      }
      if(i<word1.size() or j < word2.size()) return false;
      return true;
    }
};
