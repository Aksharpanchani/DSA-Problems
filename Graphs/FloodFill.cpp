class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       vector<vector<int>> ans;
        if(image.empty()) return ans;
        int m = image.size(), n = image[0].size();
        int oldColor = image[sr][sc];
        if(oldColor == color) return image;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            for(int i = 0; i < 4; ++i){
                int nx = x + dx[i], ny = y + dy[i];
                if(nx < 0 || ny < 0 || nx >= m || ny >= n || image[nx][ny] != oldColor) continue;
                image[nx][ny] = color;
                q.push({nx, ny});
            }
        }
        return image; 
    }
};