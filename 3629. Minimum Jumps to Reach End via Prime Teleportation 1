class Solution {
  public:
   unordered_set<string> mp;
bool isvalid(string &s){

    int cnt = 0;

    for(char ch : s){

        if(ch == '('){

            cnt++;
        }
        else if(ch == ')'){

            if(cnt == 0)
                return false;

            cnt--;
        }
    }

    return cnt == 0;
}
   
      void fun( int i , string& s , string temp , int c1 , int c2){
          int n = s.size();
          if( i>= n){
              if(c1 >0 || c2 >0) return ;
              if(isvalid(temp)){
                   mp.insert(temp);
              }
               return ;
          }
          
           if(c1!=0 && s[i]=='('){
                fun( i+1 , s , temp , c1-1, c2);
           }
            if( c2 !=0  && s[i]==')'){
                fun( i+1 , s , temp , c1 , c2-1);
            }
             fun( i+1 , s , temp + s[i] , c1 , c2);
      }
  
  
    vector<string> validParenthesis(string &s) {
        // code here
        
        vector<string>ans;
        if(isvalid(s)){
             return {s};
        }
         int n = s.size();
        stack<char> st;
 
        
        int c1 = 0, c2 = 0;

for(char ch : s){

    if(ch == '('){
        c1++;
    }
    else if(ch == ')'){

        if(c1 > 0)
            c1--;
        else
            c2++;
    }
}

if(c1==0 && c2==0){
     return {s};
}
           fun( 0 , s, "" , c1 , c2);
           for(auto it : mp){
                ans.push_back(it);
           }
        sort(ans.begin() , ans.end());
         return ans ;
    }
};
