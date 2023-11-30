class Solution {
public:
    int minimumOneBitOperations(int n) {
        int ind=0;
        vector<int> ans;
        while(n!=0){
            if((n&1)==1){
                int temp=pow(2,ind);
                temp=temp*2;
                temp--;
                ans.push_back(temp);
            }
            ind++;
            n=n>>1;
        }
        int res=0;
        reverse(ans.begin(),ans.end());
        bool flag=true;
        for(auto it:ans){
            if(flag){
                res+=it;
                flag=false;
            }
            else {
                res-=it;
                flag=true;
            }
        }
        return res;
    }
};
