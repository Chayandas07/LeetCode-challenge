class Solution {
public:

    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        sort(meetings.begin(), meetings.end(), [](vector<int>&a,vector<int>&b){
            return a[2]<b[2];
        });
        vector<int>par(n);
        for(int i=0;i<n;i++){
            par[i]=i;
        }
        par[firstPerson]=0;
        function<int(int)> find=[&](int a){
            if(par[a]==a)return a;
            else return par[a]=find(par[a]);
        };
        function<void(int,int b)> union_=[&](int a,int b){
           if(a>b){ swap(a,b);}
           int A=find(a);
           int B=find(b);
           if(A<B){
            par[B]=A;
           }else if(B<A){
            par[A]=B;
           }

        };

        for(int i=0;i<meetings.size();i++){
            int j=i;
            for(;j<meetings.size()&&meetings[i][2]==meetings[j][2];j++){
                union_(meetings[j][0],meetings[j][1]);
            }
            for(int k=i;k<j;k++){
                if(find(meetings[k][0])!=0)par[meetings[k][0]]=meetings[k][0];
                if(find(meetings[k][1])!=0)par[meetings[k][1]]=meetings[k][1];
            }
            i=j-1;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(par[i]==0)ans.push_back(i);
        }
        return ans;

    }
};
