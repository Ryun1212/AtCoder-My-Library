vl ooorder;//bfsの訪問順の頂点
vl ppparent;
vl bfs(ll start,giraffe &G,ll N){
    vl dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<ll> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[start] = 0;
    que.push(start); // 0 を橙色頂点にする
    ooorder.clear();
    ppparent.assign(N,-1);
    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();
        ooorder.push_back(v);
        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない
            ppparent[nv]=v;
            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    return dist;
}
