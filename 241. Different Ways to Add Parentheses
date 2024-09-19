class Solution {
public:
    map<pair<int,int>,vector<int>>dp;
    vector<int> solve(int i,int j,string &s){
        if(j-i+1<=2){
            string temp=s.substr(i,(j-i+1));
            cout<<temp<<endl;
            return {stoi(temp)};
        }

        if(dp.count({i,j})>0) return dp[{i,j}];

        vector<int>ans;

        for(int k=i;k<=j;k++){
            if(!isdigit(s[k])){
            vector<int> temp=solve(i,k-1,s);
            vector<int> tmp=solve(k+1,j,s);

                if(s[k]=='+'){
                    for(int it=0;it<temp.size();it++){
                        for(int itt=0;itt<tmp.size();itt++){
                            ans.push_back(temp[it]+tmp[itt]);
                        }
                    }
                }
                else if(s[k]=='*'){
                    for(int it=0;it<temp.size();it++){
                        for(int itt=0;itt<tmp.size();itt++){
                            ans.push_back(temp[it]*tmp[itt]);
                        }
                    }
                }
                else if(s[k]=='-'){
                    for(int it=0;it<temp.size();it++){
                        for(int itt=0;itt<tmp.size();itt++){
                            ans.push_back(temp[it]-tmp[itt]);
                        }
                    }
                }
            }
        }
        return dp[{i,j}]=ans;
    }
    vector<int> diffWaysToCompute(string s) {
        dp.clear();
        return solve(0,s.size()-1,s);
    }
};
