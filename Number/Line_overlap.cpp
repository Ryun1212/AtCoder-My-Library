ll Nl_over(ll l1,ll r1,ll l2,ll r2){
    ll ans=llmax(0,llmin(r1,r2)-llmax(l1,l2));
    return ans;
}
