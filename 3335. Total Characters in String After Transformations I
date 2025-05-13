class Solution {
public:
    int mod=1e9+7;
    int lengthAfterTransformations(string s, int t) {
        vector<long long>cnt(26,0);
        for(char ch:s)cnt[ch-'a']++;
        while(t--){
        vector<long long>updated(26,0);
        for(int i=0;i<26;i++){
            if(i==25){
                updated[0]=(updated[0]+cnt[i])%mod;
                updated[1]=(updated[1]+cnt[i])%mod;
            }
            else{
                updated[i+1]=(updated[i+1]+cnt[i])%mod;
            }
        }
        cnt=updated;
        }
        long long ans=0;
        for(auto c:cnt){
            ans=(ans+c)%mod;
        }
        return (int)ans;
    }
};
