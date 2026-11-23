vector<vl> bfs(ll H, ll W, const vs &grid, const  pll starts) {
    // dist配列を初期化(-1で未訪問を表す)
    vector<vl> dist(H,vl(W,-1));

    // 多視点BFS用のキュー
    queue<pll> que;
  
    dist[starts.first][starts.second] = 0;
    que.push(starts);
    ll dic=4;  //4方向なら4,8方向なら8
    // 4方向
    ll dx[dic]={1,-1,0,0};
    ll dy[dic]={0,0,1,-1};
    /*8方向
    ll dx[dic]={1,-1,0,0,1,-1,1,-1};
    ll dy[dic]={0,0,1,-1,1,1,-1,-1};*/
    while (!que.empty()) {
        auto [x,y]=que.front();
        que.pop();
        rep(i,dic){
            ll nx=x+dx[i];
            ll ny=y+dy[i];

            // 範囲チェック
            if (nx<0||nx>=H||ny<0||ny>=W) continue;

            // 壁マス('#')は通れないのでスキップ
            if (grid[nx][ny]=='#') continue;

            // すでに訪問済みならスキップ
            if (dist[nx][ny]!= -1) continue;

            // 未訪問で通れるマスなら距離を更新
            dist[nx][ny]=dist[x][y]+1;
            que.push({nx, ny});
        }
    }
    

    return dist;
}
