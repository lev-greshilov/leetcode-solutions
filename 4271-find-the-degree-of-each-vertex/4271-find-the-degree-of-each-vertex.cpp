class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {            
        int n = matrix.size();
        std::vector<int> result(n); 

        for (int i = 0; i < n; i++) {
            result[i] = std::accumulate(matrix[i].begin(), matrix[i].end(), 0);
        }
        return result;
    }
};
