class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zero=0;
        int one=0;
        int two=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)zero++;
            else if(arr[i]==1)one++;
            else if(arr[i]==2)two++;
        } 
        for(int i=0;i<arr.size();i++){
            if(zero){
                arr[i]=0;
                zero--;
            }
            else if(one){
                arr[i]=1;
                one--;
            }
            else if(two){
                arr[i]=2;
                two--;
            }
        }
        
    }
};
