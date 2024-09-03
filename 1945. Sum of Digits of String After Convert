class Solution {
public:
    int transform(int num){

        int sum  = 0;

        while(num>0){

            int digit = num % 10;
            sum += digit;
            num /= 10;
            
        }

        return sum;
        
    }
    int getLucky(string s, int k) {

        string str;

        for (auto& c : s) {
            str += to_string((c - 'a') + 1);
        }

        int sum = 0;
        for (auto& digits : str) {
            sum += digits - '0';
        }

        for(int i=1;i<k;i++){
            sum = transform(sum);
        }

        return sum;
    }
};
