class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0;
        double avg;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        avg=(double)sum/(salary.size()-2);
        return avg;
    }
};
