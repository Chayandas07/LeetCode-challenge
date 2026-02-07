class Solution {
public:
    int minimumDeletions(string s) {
        int b_before_a = 0, deletion = 0;
        for(auto ch : s) {
            if(ch == 'b') b_before_a += 1;
            else if(b_before_a > 0 ) {
                b_before_a -= 1;
                deletion += 1;
            }
        }   
        return deletion;
    }
};
