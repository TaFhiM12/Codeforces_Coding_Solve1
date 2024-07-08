#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        ll n ,m , k; cin >> n >> m >> k;
        vector<ll> left(n),right(m);
        for(auto &it : left) cin >> it;
        for(auto &it : right) cin >> it;
        sort(right.begin(), right.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll tar = k - left[i];
            ll index = upper_bound(right.begin() , right.end(), tar)-right.begin();
            cout << index << endl;
            ans += index;
        }
        cout << ans << "\n";
    }
    return 0;
}