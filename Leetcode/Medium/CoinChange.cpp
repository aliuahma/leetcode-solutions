class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        int mem[++n];
        mem[0] = 0;
        sort(begin(coins), end(coins));
        for(int i = 1; i < n; i++) {
            mem[i] = INT_MAX;
            for(int c : coins) {
                if (i - c < 0) break;
                if (mem[i - c] != INT_MAX) mem[i] = min(mem[i], 1 + mem[i-c]);
            }
        }
        return mem[--n] == INT_MAX ? -1 : mem[n];
    }
};
