/**
 * LeetCode Biweekly Contest Problem - LC 3710
 * 
 * Problem Statement (inferred from code):
 * Given a set of points, partition them into at most 2 groups such that 
 * within each group, any pair of points has a Manhattan distance ≥ D, 
 * and both groups are bipartite (no odd-length cycles).
 *
 * Goal: Find the **maximum possible D** such that the above condition holds.
 *
 * Approach:
 * - Binary search on distance D.
 * - For each candidate D, create an undirected graph where an edge exists 
 *   between two points if their distance is **less than D**.
 * - If this graph is **bipartite**, it's a valid partition for D.
 * - Return the largest D that satisfies this.
 */

 typedef long long ll;

class dsu {
public:
    ll n;
    vector<ll> par;
    vector<vector<ll>> gd;

    // Constructor to initialize DSU with N nodes
    dsu(ll N) {
        n = N;
        par.resize(N, 0);
        gd.resize(N);
        for (ll i = 0; i < n; i++) {
            par[i] = i;       // Each node is its own parent
            gd[i].push_back(i); // Each group starts with one element
        }
    }

    // Find with path compression
    ll find(ll u) {
        if (par[u] != u)
            return par[u] = find(par[u]);
        return u;
    }

    // Union two sets
    void comb(ll u, ll v) {
        ll ru = find(u), rv = find(v);
        if (ru != rv) {
            par[rv] = ru;
            gd[ru].push_back(rv); // Merge group
        }
    }

    // Check if number of disjoint sets is at most 2
    bool f() {
        vector<ll> vis(n, 0);
        ll ct = 0;
        for (ll i = 0; i < n; i++) {
            ll ri = find(i);
            if (vis[ri]) continue;
            vis[ri] = 1;
            ct++;
        }
        return ct <= 2;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Check if the undirected graph is bipartite
    bool isBipartite(const std::vector<std::vector<ll>>& adj, ll N) {
        std::vector<int> c(N, 0);  // Color array: 0 = unvisited, 1 or 2 = color

        for (ll i = 0; i < N; ++i) {
            if (c[i] != 0) continue;

            std::queue<ll> q;
            q.push(i);
            c[i] = 1;  // Start coloring with 1

            while (!q.empty()) {
                ll u = q.front();
                q.pop();

                for (ll v : adj[u]) {
                    if (c[v] == 0) {
                        c[v] = 3 - c[u];  // Alternate color
                        q.push(v);
                    } else if (c[v] == c[u]) {
                        return false; // Same color on both ends — not bipartite
                    }
                }
            }
        }
        return true;
    }

    // Check if it's possible to partition at distance ≥ dist
    bool ispos(vector<vector<ll>>& adj, ll& dist, ll& N) {
        vector<vector<ll>> edges(N);

        // Build graph: edge if distance < dist
        for (ll i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (adj[j][i] < dist) {
                    edges[i].push_back(j);
                    edges[j].push_back(i);
                }
            }
        }

        // Check if the graph is bipartite
        return isBipartite(edges, N);
    }

    // Manhattan distance between two points
    ll g(vector<int>& p1, vector<int>& p2) {
        return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
    }

    int maxPartitionFactor(vector<vector<int>>& pts) {
        ll n = pts.size();
        if (n <= 2) return 0ll;

        vector<vector<ll>> adj(n, vector<ll>(n, LLONG_MAX));
        ll MX = 1;

        // Precompute all pairwise Manhattan distances
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll MD = g(pts[i], pts[j]);
                adj[i][j] = adj[j][i] = MD;
                MX = max(MD, MX);  // Track max distance
            }
        }

        // Binary search over possible D
        ll lo = 0, hi = MX;
        while (lo < hi) {
            ll mid = (lo + hi + 1) / 2;
            if (ispos(adj, mid, n)) {
                lo = mid;  // Valid partition, try higher
            } else {
                hi = mid - 1;  // Invalid, reduce D
            }
        }

        return hi;
    }
};
