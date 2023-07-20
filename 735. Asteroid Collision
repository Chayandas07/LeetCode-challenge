class Solution {
public:
   bool samesign(int x,int y){
       if(x<0&&y<0)
       return true;
       else if(x>0&&y>0)
       return true;
       return false;
   }
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int>st;
          for(int i=0;i<n;i++){
            if(st.size()==0 || (st.top()<0 && a[i]>0) || samesign(st.top(),a[i])){
                st.push(a[i]); 
            }else{
                while(st.size()>0 && st.top()>0 && st.top() < abs(a[i])) st.pop();
                
                if(st.size()==0 || st.top()<0){
                    st.push(a[i]);
                }else if(st.top() == abs(a[i])){
                    st.pop(); 
                }
            }
        }
        
        vector<int> ans(st.size());
        int i=st.size()-1;
        while(!st.empty()){
            ans[i]=st.top();
            i--;
            st.pop();
        }
        return ans;
    }
};
