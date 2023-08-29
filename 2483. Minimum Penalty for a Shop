class Solution {
public:
    int bestClosingTime(string customers) {
        int max_score = 0, score = 0, right_time = -1;
        for(int i = 0; i < customers.size(); ++i) {
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score > max_score) {
                max_score = score;
                right_time = i;
            }
        }
        return right_time + 1;
    }
};
