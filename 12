class Solution {
  public:
    bool stringStack(string &pat, string &tar) {
        // code here
          int n= pat.size();
              int m= tar.size();
              
              int i=n-1;
              int j=m-1;
              int count =0;
              while (i>=0 && j>=0){
                     
                      if (pat[i]==tar[j]){
                            if (count%2==0) {
                                j--;
                                count=0;
                                i--;
                            }
                            else{
                                 i--;
                                 count++;
                         
                            }
                            
                      }
                          
                      else{
                           i--; 
                           count++;
                      }
              }
              if (j<0) return true;
              else return false;
    }
};

