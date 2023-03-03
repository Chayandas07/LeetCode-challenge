class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int k=0;  
        int niddilesize=needle.size();
        while(k<haystack.size()){
        // Finding first character of needle in haystack .
        auto itr=find(haystack.begin()+k,haystack.end(),needle[0]);
        int n=itr-haystack.begin();
        // If first character is found extract its index , compare it with substring of haystick . 
        string str=haystack.substr(n,niddilesize);
       // If substring is equal to needle then this is our target so return its location.
        if(str==needle){
           ans=n; 
            break;
        }
       else 
       // If not then skip this and go ahead . now find needle[0] from one index greater than needle[0].
           k=k+1;
           continue;
         }
        
        if(ans==-1)
            return -1;
        else
            return ans;
    }
};
