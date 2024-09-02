class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        if(n == 1) return {{1}};
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int d = 0;
        int pos[2] = {0, -1};
        int n1 = n;
        int n2 = n-1;
        int i = 0;
        while(i < n * n) {
            for(int j = 0; j < n1; j++) {
                pos[0] += dir[d][0];
                pos[1] += dir[d][1];
                i++;
                result[pos[0]][pos[1]] = i;
            }
            d = (d + 1) % 4;
            n1--;
            swap(n1, n2);
        }
        return result;
    }
};
