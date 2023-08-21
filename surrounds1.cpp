class Solution {
public:

    int valid(vector<vector<int> >& matrix, int x, int y)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        if(x<0 || x>=n || y<0 || y>=m)
            return 0;
        return matrix[x][y]==0;
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int dx[8] = {-1, 0, 1,  0, -1, -1, 1,  1};
        int dy[8] = { 0, 1, 0, -1, -1,  1, 1, -1};
        
        int n = matrix.size();
        int m = matrix[0].size();
        int ans=0;
        

        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==1)
                {
                    int cur = 0;
                    for(int k=0; k<8; k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        cur += valid(matrix,x,y);
                    }
                    if(cur)
                    {
                        if(cur%2==0)
                            ++ans;
                    }
                }
                
                    
            }
        }
        return ans;
    }
};
