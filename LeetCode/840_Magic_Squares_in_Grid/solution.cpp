class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        if (r < 3 || c < 3) return 0;

        int count = 0;

        for (int i = 1; i < r - 1; i++) {
            for (int j = 1; j < c - 1; j++) {

                // Center must be 5
                if (grid[i][j] != 5) continue;

                vector<int> nums;
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        nums.push_back(grid[x][y]);
                    }
                }

                sort(nums.begin(), nums.end());
                for (int k = 0; k < 9; k++) {
                    if (nums[k] != k + 1) goto skip;
                }

                if (
                    grid[i-1][j-1] + grid[i-1][j] + grid[i-1][j+1] == 15 &&
                    grid[i][j-1]   + grid[i][j]   + grid[i][j+1]   == 15 &&
                    grid[i+1][j-1] + grid[i+1][j] + grid[i+1][j+1] == 15 &&
                    grid[i-1][j-1] + grid[i][j-1] + grid[i+1][j-1] == 15 &&
                    grid[i-1][j]   + grid[i][j]   + grid[i+1][j]   == 15 &&
                    grid[i-1][j+1] + grid[i][j+1] + grid[i+1][j+1] == 15 &&
                    grid[i-1][j-1] + grid[i][j]   + grid[i+1][j+1] == 15 &&
                    grid[i-1][j+1] + grid[i][j]
