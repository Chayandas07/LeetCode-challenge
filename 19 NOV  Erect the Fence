class Solution {
public:
    
    bool isClockwiseTurn(vector<int> &a, vector<int> &b, vector<int> &c) {
        int xa = a[0], xb = b[0], xc = c[0];
        int ya = a[1], yb = b[1], yc = c[1];
        bool isConvex = (((yc - yb) * (xb - xa)) - ((yb - ya) * (xc - xb))) >= 0;
        return isConvex;
    }
    
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        vector<vector<int>> convexHull;
        int n = trees.size();
       
        auto cmp = [&](vector<int> &a, vector<int> &b) {
            if(a[0] < b[0]) {
                return true;
            } else if (a[0] == b[0] && a[1] < b[1]) {
                return true;
            }
            return false;
        };
        
        sort(trees.begin(), trees.end(), cmp);
        
        for(int i = 0; i < n; i++) {
            while(convexHull.size() > 1 && !isClockwiseTurn(convexHull[convexHull.size() - 2], convexHull[convexHull.size() - 1], trees[i])) {
                convexHull.pop_back();
            }
            convexHull.push_back(trees[i]);
        }
        
        for(int i = n - 1; i >= 0; i--) {
            while(convexHull.size() > 1 && !isClockwiseTurn(convexHull[convexHull.size() - 2], convexHull[convexHull.size() - 1], trees[i])) {
                convexHull.pop_back();
            }
            convexHull.push_back(trees[i]);
        }
        convexHull.pop_back(); 
        sort(convexHull.begin(), convexHull.end(), cmp);
        convexHull.erase(unique(convexHull.begin(), convexHull.end()), convexHull.end());
        return convexHull;
    }
};
