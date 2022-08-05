class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int sc = 0, ec = matrix[0].size()-1, sr = 0, er = matrix.size()-1;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> result(m*n);
        int count = 0;
        
        while (42)
        {
            for (int i = sc; i <= ec; i++)
            {
                result[count] = matrix[sr][i];
                count++;
            }
            sr++;
            if (count == m*n)
                break;
            
            for (int i = sr; i <= er; i++)
            {
                result[count] = matrix[i][ec];
                count++;
            }
            ec--;
            if (count == m*n)
                break;
            
            for (int i = ec; i >= sc; i--)
            {
                result[count] = matrix[er][i];
                count++;
            }
            er--;
            if (count == m*n)
                break;
            
            for (int i = er; i >= sr; i--)
            {
                result[count] = matrix[i][sc];
                count++;
            }
            sc++;
            if (count == m*n)
                break;
        }
        return result;
    }
};
