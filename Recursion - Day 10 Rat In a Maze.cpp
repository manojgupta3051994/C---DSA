#include<iostream>
#include<vector>
using namespace std;



class Solution{
    private:
   
    bool isSafe(vector<vector<int>> &m, int n,int x, int y ,vector<vector<int>> visited){
        if ((x>=0 && x< n) && (y>=0 && y<n) && (visited[x][y]==0) && (m[x][y] == 1)){
            return true;
        }
        else{
            return false;
        }
    }
   
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y,  vector<vector<int>> visited, string path){
       
        //base case
       
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
       
        visited[x][y] = 1;
       
       
        //down
        int newx = x+1;
        int newy = y;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
       
        //left
        newx = x;
        newy = y-1;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
       
        //right
        newx = x;
        newy = y+1;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
       
        //up
        newx = x-1;
        newy = y;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
       
       
        visited[x][y] = 0;
    }
   
   
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
       
        if(m[0][0] == 0){
            return ans;
        }
       
        int srcx = 0;
        int srcy = 0;
       
        vector<vector<int>> visited = m;
       
        for (int i =0; i<n; i++){
            for (int j =0;j<n ;j++){
                visited[i][j] = 0;
               
            }
        }
       
        string path="";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//Optimized Soln:

class Solution {
  void solve(int i, int j, vector < vector < int >> & a, int n, vector < string > & ans, string move,
    vector < vector < int >> & vis, int di[], int dj[]) {
    if (i == n - 1 && j == n - 1) {
      ans.push_back(move);
      return;
    }
    string dir = "DLRU";
    for (int ind = 0; ind < 4; ind++) {
      int nexti = i + di[ind];
      int nextj = j + dj[ind];
      if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1) {
        vis[i][j] = 1;
        solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
        vis[i][j] = 0;
      }
    }
