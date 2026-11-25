vl par(n,-1);
    vl order = {0};
    vl dep(n,0);
    rep(i,order.size()){
        ll v=order[i];

        for(auto u:g[v]){
            if(u==par[v]) continue;

            par[u]=v;
            order.push_back(u);
            dep[u]=dep[v]+1;
        }
    }
    reverse(order.begin(),order.end());
    //vector<mont> dp0(n,0),dp1(n,0);
    vl size(n,1);
     for(ll v:order){
        //dp0[v] = A[v];
        //dp1[v] = B[v];
        
        for(auto u:g[v]){
            if(par[u]!=v) continue;
            //dep[u]=dep[v]+1;
            size[v]+=size[u];
        }
    }
    vl ans(n,0);
    rep(i,n){
        ans[0]+=dep[i];
    }
    reverse(order.begin(),order.end());
    for(ll v:order){
    for(ll u:g[v]){
        if(par[u]!=v) continue;

        ans[u]=ans[v]+n-2*size[u];
    }
    }
