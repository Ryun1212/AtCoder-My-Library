#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define rep(i,n) for(ll i=0;i<(n);i++)
//#define sort(a) sort(a.begin(),a.end())
#define vvl vector<vl>
#define vpll vector<pll>
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define cyes cout<<"Yes"<< endl
#define cno cout<<"No"<< endl
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
using giraffe = vector<vector<ll>>;
const ll INF = 1LL << 60;
//このコードで使用している関数などが含まれたサイトです。
//https://gist.github.com/Ryun1212/0da01471a4efe1ccbdc8b5d88979f994
ll llmax(ll a,ll b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
ll llmin(ll a, ll b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
ll upper(ll a,ll b){
    return (a+b-1)/b;
}
