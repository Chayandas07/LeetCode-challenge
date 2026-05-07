class DSU {
    int[] par, sz, compMax;

    DSU(int n, int[] nums) {
        par = new int[n];
        sz = new int[n];
        compMax = nums.clone();

        for(int i = 0; i < n; i++) {
            par[i] = i;
            sz[i] = 1;
        }
    }

    int findPar(int u) {
        if(par[u] == u) return u;
        return par[u] = findPar(par[u]);
    }

    void unionBySize(int u, int v) {
        int pu = findPar(u);
        int pv = findPar(v);

        if(pu == pv) return;

        if(sz[pu] < sz[pv]) {
            int temp = pu;
            pu = pv;
            pv = temp;
        }

        par[pv] = pu;
        sz[pu] += sz[pv];

        compMax[pu] = Math.max(compMax[pu], compMax[pv]);
    }
}

class Solution {
    public int[] maxValue(int[] nums) {
        int n = nums.length;

        int[] prefixMax = new int[n];
        int[] suffixMin = new int[n];

        prefixMax[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefixMax[i] = Math.max(prefixMax[i - 1], nums[i]);
        }

        suffixMin[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffixMin[i] = Math.min(suffixMin[i + 1], nums[i]);
        }

        DSU ds = new DSU(n, nums);

        for(int i = 0; i < n - 1; i++) {
            if(prefixMax[i] > suffixMin[i + 1]) {
                ds.unionBySize(i, i + 1);
            }
        }

        int[] ans = new int[n];

        for(int i = 0; i < n; i++) {
            ans[i] = ds.compMax[ds.findPar(i)];
        }

        return ans;
    }
}
