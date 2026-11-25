vl topsort(const giraffe& G) {
    ll N=G.size();

    vl indeg(N,0);

    // 入次数を数える
    for (int u = 0; u < N; u++) {
        for (int v : G[u]) {
            indeg[v]++;
        }
    }

    priority_queue<ll,vl,greater<ll>> que;

    // 入次数0の頂点を追加
    for (int i = 0; i < N; i++) {
        if (indeg[i] == 0) {
            que.push(i);
        }
    }

    vl order;

    while (!que.empty()) {
        ll u = que.top();
        que.pop();

        order.push_back(u);

        for (ll v : G[u]) {
            indeg[v]--;

            if (indeg[v] == 0) {
                que.push(v);
            }
        }
    }

    // 閉路があれば空のvectorを返す
    if ((ll)order.size() != N) {
        return {};
    }

    return order;
}
