#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define pb push_back
#define forn(a,b,c) for(int a=b;a<c;a++)
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DBG(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<==============<<"\n"
int main(){FIN;
    //ifstream cin("test.txt");
    ll n,bas,res = 0;
    cin>>n;
    vector<vector <ll> > ady(n+1);
    forn(i,1,n+1){
        cin>>bas;
        if(bas != -1) ady[bas].pb(i);
    }
    priority_queue<pair<ll,ll> > q;
    q.push(make_pair(1,1));
    while(!q.empty()){
        ll act = q.top().first;
        ll dis = q.top().second;
        q.pop();
        if(dis>res) res = dis;
        for(ll i=0;i<ady[act].size();i++) q.push(make_pair(ady[act][i],dis+1));
    }
    show(res);
    //System(pause);
    //cin.close()
    return 0;
}