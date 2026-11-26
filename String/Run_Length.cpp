vector<pair<char,ll>> encode(const string& str){ //runlength
    ll n =(ll)str.size();
    vector<pair<char,ll>> ret;
    for (ll l =0;l<n;) {
        ll r=l+1;
        for (;r<n&&str[l]==str[r];r++){};
        ret.push_back({str[l],r-l});
        l=r;
    }
    return ret;
}
