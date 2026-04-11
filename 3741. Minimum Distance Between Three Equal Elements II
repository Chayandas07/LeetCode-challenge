import java.util.*;

class Solution {
    public int minimumDistance(int[] nums) {
        Map<Integer, List<Integer>> mp = new HashMap<>();
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            mp.computeIfAbsent(nums[i], k -> new ArrayList<>()).add(i);
        }

        int mini = Integer.MAX_VALUE;

        for (List<Integer> temp : mp.values()) {
            int m = temp.size();

            if (m >= 3) {
                for (int i = 0; i < m - 2; i++) {
                    int a = temp.get(i);
                    int b = temp.get(i + 1);
                    int c = temp.get(i + 2);

                    int diff = 2 * (c - a);
                    mini = Math.min(mini, diff);
                }
            }
        }

        return mini == Integer.MAX_VALUE ? -1 : mini;
    }
}
