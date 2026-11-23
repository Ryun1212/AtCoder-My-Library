ll alternating_bfs(ll h, ll w, const vector<string>& grid){
       // dist[i][j][k] 
       // k=0: 次は上下に移動 
       // k=1: 次は左右に移動 
       vector<vector<vector<ll>>> dist( h, vector<vector<ll>>(w, vector<ll>(2, INF)) ); 
       queue<array<ll, 3>> q;
        q.push({0, 0, 0});
        q.push({0, 0, 1});
        dist[0][0][0] = 0; 
        dist[0][0][1] = 0; 
        while(!q.empty()){
             auto [i, j, k] = q.front(); 
             q.pop(); vector<pair<ll, ll>> d; 
             if(k == 0){
                 d = {{1, 0}, {-1, 0}}; 
             }else{
                 d = {{0, 1}, {0, -1}}; 
             } 
             for(auto [di, dj] : d){
                 ll ii = i + di; 
                 ll jj = j + dj; 
                 ll kk = k ^ 1; 
                 
                 if(0 <= ii && ii < h && 0 <= jj && jj < w && grid[ii][jj] == '.' && dist[ii][jj][kk] == INF){
                     dist[ii][jj][kk] = dist[i][j][k] + 1; 
                     q.push({ii, jj, kk}); 
                 } 
            } 
        }
            ll pvpv= llmin(dist[h-1][w-1][0], dist[h-1][w-1][1]);
            if(pvpv!=INF){
                return pvpv;
            }else{
                return -1;
            }
            //return min(dist[h-1][w-1][0], dist[h-1][w-1][1]); 
}
