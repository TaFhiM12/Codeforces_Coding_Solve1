// #include<bits/stdc++.h>
// using namespace std ;
// #define nl "\n" 
// #define int long long
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define fraction(n) cout << fixed << setprecision(n);

// int32_t main()
// {
//     optimize();
//     int n ;
//     string a , b ;
//     cin >> n >> a >> b  ;
//     map<char,int> ca , cb ;
//     for(auto u : a) ca[u]++;
//     for(auto u : b) cb[u]++;
//     set<char> st ;
//     for(auto u : b) st.insert(u);
//     int cnt = 0 ;
//     for(auto u : st){
//         cnt += abs(cb[u]-ca[u]);
//     }
//     cout << cnt << nl ;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve()
{
    int n,ans = 0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i<n; i++){
        if(a[i]!=b[i]) ans++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    optimize();
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define run_fast                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define el "\n"
#define ll long long int
#define flp(i, a, n) for (ll i = a; i < n; i++)
#define flr(i, a, n) for (ll i = a; i >= n; i--)
#define yss cout << "YES\n"
#define noo cout << "NO\n"
#define F first
#define S second
#define endc return 0
ll mod = 1000000007;

int main()
{
    run_fast;
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    map<char, ll> ma, mb;
    for (int i = 0; i < n; i++)
    {
        ma[a[i]]++;
        mb[b[i]]++;
    }
    ll ans = 0;
    for (auto it : mb)
    {
        if (it.second > ma[it.first])
        {
            ans += (it.second -ma[it.first]);
        }
    }
    cout << ans << el;
    endc;
}