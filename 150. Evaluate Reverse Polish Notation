class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>s;
        for(string a: tokens){
            if(a=="+"){
                long val1,val2;
                val1=s.top();
                s.pop();
                val2=s.top();
                s.pop();
                s.push(val1+val2);
            }else if(a=="-"){

                int val1,val2;
                val1=s.top();
                s.pop();
                val2=s.top();
                s.pop();
                s.push(val2-val1);
            }else if(a=="*"){

                long val1=s.top();
                s.pop();
                long val2=s.top();
                s.pop();
                s.push(val1*val2);
            }else if(a=="/"){

                long val1,val2;
                val1=s.top();
                s.pop();
                val2=s.top();
                s.pop();
                s.push(val2/val1);
            }else{
                s.push(stoi(a));
            }
        }
        return (int)s.top();
    }
};
