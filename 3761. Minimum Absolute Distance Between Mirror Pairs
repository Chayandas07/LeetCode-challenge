class Solution {
    public int reverseNum(int x){
        int rev = 0;
        while(x > 0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    public int minMirrorPairDistance(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        int ans = Integer.MAX_VALUE;

        for(int j = 0; j < nums.length; j++){
            if(mp.containsKey(nums[j])){
                ans = Math.min(ans, j - mp.get(nums[j]));
            }

            int rev = reverseNum(nums[j]);
            mp.put(rev, j);
        }

        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}
