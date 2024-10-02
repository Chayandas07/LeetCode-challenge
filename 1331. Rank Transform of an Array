// Approach - 01 [ No Sorting function]
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        map<int,int> mp;
        // store values in ordered map
        for(auto& val: a){
            mp[val]++;
        }

        // start assign value their rank 
        // from top to bottom
        int rank=1;
        for(auto& val:mp){
            val.second = rank;
            rank++;
        }

        // traverse on array and assign them
        // rank based on map
        vector<int> ans(a.size());
        for(int i=0;i<a.size();i++){
            ans[i] = mp[a[i]];
        }

        // return the ranks
        return ans;
    }
};
