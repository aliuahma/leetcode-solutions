class Solution {
public:
    int lowestJ(int sum, vector<vector<int>>& mat) {
        int res = sum - std::max(mat.size() - 1, mat[0].size() - 1);
        return (res <= 0) ? 0 : res;
    }

    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
        int max = mat.size() - 1 + mat[0].size() - 1;
        bool dir = true; // up is true, down is false
        for(int i = 0; i <= max; i++) {
            int low = lowestJ(i, mat);
            for(int j = low; j <= i - low; j++) {
                if(dir && mat.size() - 1 >= i - j && mat[0].size() - 1 >= j) result.push_back(mat[i-j][j]);
                if(!dir && mat.size() - 1 >= j && mat[0].size() - 1 >= i - j) result.push_back(mat[j][i-j]);
            }
            dir = !dir;
        }
        return result;
    }
};
