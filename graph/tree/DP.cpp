    vl par(n,-1);
    vl order = {0};
    rep(i,order.size()){
        ll v=order[i];

        for(auto u:g[v]) {
            if(u==par[v]) continue;
            par[u]=v;
            order.push_back(u);
        }
    }
    reverse(order.begin(),order.end());
    vector<T> dp0(n,0),dp1(n,0);
     for(ll v:order) {
        /*dp0[v] = 1;
        dp1[v] = 1;*/// 初期化？
        for (auto u : g[v]) {
            if (par[u] != v) continue;

            /*dp0[v] *= dp0[u] + dp1[u];
            dp1[v] *= dp0[u];*/
          //遷移
        }
    }
