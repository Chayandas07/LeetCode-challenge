class Solution {
public:
    int find(map<int, int>& mp, int x){
  	// Max-heap to store {frequency, number}
        priority_queue<pair<int, int>> pq;
        // Build the heap from the frequency map
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        int sum=0;
  	// Get the top x most frequent elements
        while(x-- && !pq.empty()){
            auto it = pq.top();
            pq.pop();
            int freq = it.first;
  		// Add all occurrences of this number to the sum
            while(freq--){
                sum+=it.second;
            }
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
  	// Frequency map for the current window
        map<int, int> mp;
  	// Result vector
        vector<int> v;
  	// Sliding window pointers
        int l=0, r=0;
        while(r<nums.size()){
  	    // Expand window: add right element
            mp[nums[r]]++;
  		// Shrink window if size > k
            while(l<r && r-l+1 > k){
  	        // Remove left element from map
                mp[nums[l]]--;
  	        // Erase from map if frequency is 0
                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                }
  	        // Move left pointer
                l++;
            }
  		// If window is exactly size k, process it
            if(r-l+1 == k){
                v.push_back(find(mp, x));
            }
  		// Move right pointer
            r++;
        }
        return v;
    }
};
