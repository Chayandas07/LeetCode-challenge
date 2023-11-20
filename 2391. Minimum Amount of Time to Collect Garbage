#pragma GCC optimize("O3")
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int n=garbage.size();
        int tG=0, tP=0, tM=0;
        int time=0; 
        #pragma unroll
        for(int i=n-1; i>=0; i--){//time for collecting garbage
            string x=garbage[i];
            time+=x.size();
            if (tG==0 && x.find('G')!=-1) tG=i;
            if (tP==0 && x.find('P')!=-1) tP=i;
            if (tM==0 && x.find('M')!=-1) tM=i;
        }
        // Add travel time
        time+=accumulate(travel.begin(), travel.begin()+(tG),0)
            +accumulate(travel.begin(), travel.begin()+(tP),0)
            +accumulate(travel.begin(), travel.begin()+(tM),0);
        return time;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
