vector<vector<ll>> multi_source_bfs(int H, int W, const vector<string> &grid, const vector<pll> &starts) {
    // dist配列を初期化(-1で未訪問を表す)
    vector<vector<ll>> dist(H, vector<ll>(W, -1));

    // 多視点BFS用のキュー
    queue<pair<ll,ll>> que;

    // 全ての始点をキューに投入し、距離0で初期化
    for (auto &st : starts) {
        dist[st.first][st.second] = 0;
        que.push(st);
    }

    // 方向ベクトル（上下左右）
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    // BFSループ開始
    while (!que.empty()) {
        auto [x, y] = que.front();
        que.pop();

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            // 範囲チェック
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;

            // 壁マス('#')は通れないのでスキップ
            if (grid[nx][ny] == '#') continue;
            //if(grid[nx][ny]==)

            // すでに訪問済みならスキップ
            if (dist[nx][ny] != -1) continue;

            // 未訪問で通れるマスなら距離を更新
            dist[nx][ny] = dist[x][y] + 1;
            que.push({nx, ny});
        }
    }
    

    return dist;
}
