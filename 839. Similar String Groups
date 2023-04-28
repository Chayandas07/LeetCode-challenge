class Solution {
public:
    int p[300], r[300], sum;
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        sum = n;
        for (int i = 0; i < n; i++) p[i] = i, r[i] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (similar(strs[i], strs[j])) {
                    Union(i, j);
                }
            }
        }
        return sum;
    }
    
    bool similar(string const& s1, string const& s2) {
        int diff = 0;
        for (int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                diff++;
                if (diff > 2) return false;
            }
        }
        return diff <= 2;
    }
    
    void Union(int i, int j) {
        int p1 = find(i);
        int p2 = find(j);
        if (p1 == p2) return;
        if (r[p1] < r[p2]) swap(p1, p2);
        p[p2] = p1;
        r[p1] += r[p2];
        sum--;
    }
    
    int find(int i) {
        while (i != p[i]) {
            p[i] = p[p[i]];
            i = p[i];
        }
        return i;
    }
};
