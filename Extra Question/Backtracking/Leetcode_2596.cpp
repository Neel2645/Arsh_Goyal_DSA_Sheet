//! Leetcode - 2596 :- Check Knight Tour Configuration

//* Method - 1
//? TC - O(8 ^ (N*2))
//? SC - O(N^2)


class Solution {
    public:
    
        bool isValid(vector<vector<int>>& grid,int r,int c,int n,int value)
        {
            if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != value) return false;
    
            if(value == (n*n - 1)) return true;
    
            int ans1 = isValid(grid,r-2,c+1,n,value+1);
            int ans2 = isValid(grid,r-1,c+2,n,value+1);
            int ans3 = isValid(grid,r+1,c+2,n,value+1);
            int ans4 = isValid(grid,r+2,c+1,n,value+1);
            int ans5 = isValid(grid,r+2,c-1,n,value+1);
            int ans6 = isValid(grid,r+1,c-2,n,value+1);
            int ans7 = isValid(grid,r-1,c-2,n,value+1);
            int ans8 = isValid(grid,r-2,c-1,n,value+1);
    
            return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
        }
    
        bool checkValidGrid(vector<vector<int>>& grid) {
            int n = grid.size();
            return isValid(grid,0,0,n,0);
        }
};