#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int i, int j, int n, vector<vector<int>> &m, vector<vector<bool>> &visited)
{
    if(i>=0 && j>=0 && i<n && j<n && m[i][j]==1 && !visited[i][j])
        return true;
    return false;
}
void solve(vector<vector<int>> &m, int n, int i, int j,vector<string> &ans, string path,vector<vector<bool>> &visited)
{
    // base case
    if(i==n-1 && j==n-1)
    {
        ans.push_back(path);
        return;
    }

    // mark visited
    visited[i][j]=true;

    // Down
    if(isSafe(i+1, j, n, m, visited))
    {
        path.push_back('D');
        solve(m, n, i+1, j, ans, path, visited);
        path.pop_back();
    }

    // Left
    if(isSafe(i, j-1, n, m, visited))
    {
        path.push_back('L');
        solve(m, n, i, j-1, ans, path, visited);
        path.pop_back();
    }

    // Right
    if(isSafe(i, j+1, n, m, visited))
    {
        path.push_back('R');
        solve(m, n, i, j+1, ans, path, visited);
        path.pop_back();
    }

    // Up
    if(isSafe(i-1, j, n, m, visited))
    {
        path.push_back('U');
        solve(m, n, i-1, j, ans, path, visited);
        path.pop_back();
    }

    // backtrack
    visited[i][j] = false;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string>ans;

    if(m[0][0]==0)
        return ans;

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";

    solve(m, n, 0, 0, ans, path, visited);

    return ans;
}

int main()
{
    vector<vector<int>>maze={
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string>result = findPath(maze,4);

    for(auto s:result)
    cout<<s<<endl;

    return 0;
}