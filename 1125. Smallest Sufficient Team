class Solution {
public:
    int r; // Number of required skills
    int n; // Number of people
    vector<int> peoMask; // Bitmasks representing skills of each person
    vector<long long> dp; // Memoization table

    // Recursive function to find the minimum team
    long long team(int skills_had) {
        if (skills_had == 0) return 0; // Base case: no skills required
        if (dp[skills_had] != INT_MAX) return dp[skills_had]; // Return memoized result if available
        
        long long ans = n;
        for (int i = 0; i < n; i++) {
            int skills = skills_had & ~peoMask[i]; // Remove skills already covered by person i
            if (skills != skills_had) {
                long long chosen = team(skills) | 1LL << i; // Recursively find the minimum team without person i
                bitset<60> bChosen(chosen);

                // Check if the newly chosen team has fewer people
                if (bChosen.count() < bitset<60>(dp[skills_had]).count())
                    dp[skills_had] = chosen; // Update the memoization table with the new minimum team
            }
        }
        return dp[skills_had];
    }

    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) 
    {
        r = req_skills.size();
        n = people.size();

        // Transform skills from strings to numbers
        unordered_map<string, int> skill_nr;
        for (int i = 0; i < r; i++)
            skill_nr[req_skills[i]] = i;

        peoMask.assign(n, 0);
        for (int i = 0; i < n; i++) {
            for (string& skill : people[i]) {
                peoMask[i] |= (1 << skill_nr[skill]); // Set the corresponding bit for each skill of person i
            }
        }

        // DP
        dp.assign(1<<r, INT_MAX);
        long long peoChosen = team((1<<r)-1); // Find the minimum team to cover all required skills
        bitset<60> X(peoChosen);
        vector<int> ans;
        for (int i = 0; i < n; i++)
            if (X[i]) ans.push_back(i); // Add the selected people to the answer

        return ans;
    }
};
