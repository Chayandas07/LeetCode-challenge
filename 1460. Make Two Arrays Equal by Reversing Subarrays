class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>hash_target;
        unordered_map<int,int>hash_arr;
        int N = target.size();
        for (int i=0; i < N; i++) {
            hash_target[target[i]]++;
            hash_arr[arr[i]]++;
        }
        return hash_target == hash_arr;
    }
};
