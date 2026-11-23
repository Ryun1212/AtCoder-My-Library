vl dijkstra(ll s, vector<vector<pll>>& G) {
    ll n = G.size();
    const ll INF = (1LL << 60);

    vl dist(n, INF);

    priority_queue<
        pll,
        vector<pll>,
        greater<pll>
    > pq;

    dist[s] = 0;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();

        if (d > dist[v]) continue;

        for (auto [to, cost] : G[v]) {
            if (dist[to] > dist[v] + cost) {
                dist[to] = dist[v] + cost;
                pq.push({dist[to], to});
            }
        }
    }

    return dist;
}
