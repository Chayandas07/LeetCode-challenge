class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grumpy, int minutes) {
        int res = 0, curr = 0;
        for(int i = 0; i < cust.size(); ++i) {
            if(grumpy[i] == 0) res += cust[i];
        }
        
        for(int i = 0; i < minutes; ++i) {
            if(grumpy[i]) curr += cust[i];
        }

        int addi = curr;
        for(int i = minutes; i < cust.size(); ++i) {
            if(grumpy[i - minutes]) curr -= cust[i - minutes];
            if(grumpy[i]) curr += cust[i];
            addi = max(addi, curr);
        }

        return res + addi;
    }
};
