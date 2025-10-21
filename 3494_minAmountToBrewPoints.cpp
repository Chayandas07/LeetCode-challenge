/*
LeetCode Problem 3494: Minimum Total Time
🔗 https://leetcode.com/problems/minimum-total-time/

Problem Description:
You are given two arrays:
- skill[]: an array of 'n' integers where skill[i] denotes the skill value of the i-th warrior.
- mana[]: an array of 'm' integers where mana[i] denotes the mana cost of the i-th spell.

You must apply **each mana spell exactly once**, and in order, to groups of warriors.
At each stage, you apply the current spell to a **contiguous group of warriors** (starting from where the last spell left off).
Each warrior must be covered by exactly one spell.

The cost for applying a spell at a particular stage is:
   total_time = sum of (skill[i] * mana[j]) for each applicable warrior

You want to determine the **minimum total time** required to apply all spells to all warriors in such a way that:
- Each spell is applied in order.
- The warriors are partitioned accordingly into m groups.

Return the **minimum total time** required.

Example:
Input:
    skill = [1, 3, 5]
    mana = [2, 4]
Output:
    26

Explanation:
    Optimal partitioning:
    - Apply mana[0] = 2 to skill[0,1] => (1+3)*2 = 8
    - Apply mana[1] = 4 to skill[2]   => 5*4 = 20
    Total = 8 + 20 = 28
    But better:
    - Apply mana[0] = 2 to skill[0]   => 1*2 = 2
    - Apply mana[1] = 4 to skill[1,2] => (3+5)*4 = 32
    Total = 2 + 32 = 34
    Best:
    - Apply mana[0] = 2 to skill[0,1] => 8
    - Apply mana[1] = 4 to skill[2]   => 20
    Total = 26 ✅

Approach:
- Use dynamic programming (DP), where dp[i][j] represents the minimum total time required to assign the first i spells to the first j warriors.
- Use space optimization by keeping only the previous and current DP rows.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();  // Number of warriors
        int m = mana.size();   // Number of spells

        // DP arrays: prev = previous row, curr = current row
        // dp[i][j] = minimum time to process first j warriors with first i spells
        vector<long long> curr(n + 1), prev(n + 1);

        // Base case: using only the first mana spell
        // For j warriors, time = sum of skill[0..j-1] * mana[0]
        prev[0] = 0;
        for (int i = 1; i <= n; i++)
            prev[i] = prev[i - 1] + (skill[i - 1] * 1LL * mana[0]);

        // Loop over each mana spell starting from the second one
        for (int i = 1; i < m; i++) {
            long long x = prev[1]; // Best partition time starting from index 1
            long long cltr = 0;     // Cumulative time cost for current partition

            // Try to find the best partition point
            for (int j = 1; j < n; j++) {
                // Update best x: 
                // x = max(previous dp - current partition cost so far)
                x = max(x, prev[j + 1] - ((skill[j - 1] * mana[i] * 1LL) + cltr));

                // Add current skill * mana to cumulative total
                cltr += skill[j - 1] * mana[i] * 1LL;
            }

            // Start filling current row of dp
            // curr[0] = base case: applying this spell to zero warriors (invalid)
            curr[0] = x;

            // Build up cumulative cost applying mana[i] to skill[0..j-1]
            for (int j = 1; j <= n; j++)
                curr[j] = curr[j - 1] + (skill[j - 1] * mana[i] * 1LL);

            // Move to the next stage: prev becomes curr
            prev = curr;
        }

        // Final answer: min total time to apply all spells to all warriors
        return prev[n];
    }
};