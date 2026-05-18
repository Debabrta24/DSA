class Solution
{
public:
    int row[] = {-1, 1, 0, 0};
    int col[] = {0, 0, -1, 1};
    string dir = "UDRL";
    void Total(vector<vector<int>> &matrix, int i, int j, int n, int n,
               string path, vector<string> &ans, vector<vector<bool>> &visited)
    {
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(path);
            return;
        }
        visited[i][j] = 1;
        for (int k = 0; k < 4; k++)
        {
            if (vaild(i + row[k], j + col[k], n) && matrix[i + row[k][j + col[k]]] && !visited[i + row[k][j + col[k]]])
            {
                path.push_back(dir[k]);
                Total(matrix, i + row[k], j + col[k], n, path, ans, visited)
            }
        }
        //   //up
        //   if(vaild(i-1,j,n)&& matrix[i-1][j] && !visited[i-1][j){
        //       path.push_back("U");
        //       Total(matrix,i-1,j,n,path,ans,visited);
        //   }
        //   //down
        //     if(vaild(i+1,j,n)&& matrix[i+1][j] && !visited[i+1][j){
        //       path.push_back("D");
        //       Total(matrix,i+1,j,n,path,ans,visited);
        //   }
        //   //left
        //      if(vaild(i,j-1,n)&& matrix[i][j-1] && !visited[i][j-1){
        //       path.push_back("L");
        //       Total(matrix,i,j-1,n,path,ans,visited);
        //   }
        // // right
        //  if(vaild(i,j+1,n)&& matrix[i][j+1] && !visited[i][j+1){
        //       path.push_back("R");
        //       Total(matrix,i,j+1,n,path,ans,visited);
        //   }
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
    }
};