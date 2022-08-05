class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size(), total = r*c;
        
        if (m * n != r * c)
            return mat;
        
        vector<vector<int>> res(r, vector<int>(c, 0));
        
        for (int i = 0; i < total; i++)
            res[i / c][i % c] = mat[i / n][i % n];
        
        return res;
    }
};
