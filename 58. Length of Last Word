class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int f;
        char p = ' ';
        for(int i=n-1;i>=0;i--){
            if(s[i] != p){
                f=i;
                break;
            }
        }
        int count=0;
        for(int i=f; i>=0; i--){
            if(s[i] == p)
            break;

            count++;
        }

        return count;


    }
};
