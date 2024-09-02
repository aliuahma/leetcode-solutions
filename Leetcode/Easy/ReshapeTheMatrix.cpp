class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(r * c != m * n) return mat;
        int s = m * n;
        vector<int> v(s, 0);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                v[i * n + j] = mat[i][j];
            }
        }
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                res[i][j] = v[i * c + j];
            }
        }
        return res;
    }
};
