#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int N, sum = 0, ans = 0;
vector<pair<int, int>> a(200005);

int32_t main()
{
    optimize();
    cin >> N ;
    for (int i = 0; i < N; i++) {
        cin >> a[i].first >> a[i].second;
        // sum += a[i].first;
    }
    sort(a.rbegin(),a.rend());
    // cout << ans << endl;
    for(int i=0;i<N;i++) {
        sum += (a[i].second -  a[i].first);
    }
    cout << sum << nl;
    return 0;
}