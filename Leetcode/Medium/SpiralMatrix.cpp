class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty()) return result;
        result = matrix[0];
        int dirs[4][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
        int d = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int pos[2] = {0, n - 1};
        int i = (m - 1) * n;
        while(i > 0) {
            for(int j = 1; j < m; j++) {
                i--;
                pos[0] += dirs[d][0];
                pos[1] += dirs[d][1];
                result.push_back(matrix[pos[0]][pos[1]]);
            }
            m--;
            swap(m, n);
            d = (d + 1) % 4;
        }
        return result;
    }
};
