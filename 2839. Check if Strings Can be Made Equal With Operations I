class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string even1 = "", odd1 = "";
        string even2 = "", odd2 = "";
        
        for(int i = 0; i < s1.size(); i++) {
            if(i % 2 == 0) {
                even1 += s1[i];
                even2 += s2[i];
            } else {
                odd1 += s1[i];
                odd2 += s2[i];
            }
        }
        
        sort(even1.begin(), even1.end());
        sort(even2.begin(), even2.end());
        sort(odd1.begin(), odd1.end());
        sort(odd2.begin(), odd2.end());
        
        return even1 == even2 && odd1 == odd2;
    }
};
