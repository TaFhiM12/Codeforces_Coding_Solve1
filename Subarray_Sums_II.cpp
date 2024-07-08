#include <bits/stdc++.h>
#define eb emplace_back
#define nl "\n"
using namespace std;
typedef vector<int> vi;
#define int long long
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
 
const int mx = 2e5 + 123;
int a[mx];
int pre[mx];
 
int32_t main()
{
    optimize();
    int n, k, cnt = 0;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = a[i] + pre[i - 1];
    }
    // for(int i=n;i>0;i--){
    //     for(int j=n-1 ; j>=0 ;j--){
    //         if(pre[i]-pre[j] ==  7) cnt++;
    //     }
    // }
    // for(int i=0;i<=n ; i++) cout << pre[i] << " ";
    // cout << nl << cnt <<nl;
 
    // for(int i=0;i<=n;i++) cout << pre[i] << " ";
    map<int, int> mp;
    for (int i = 0; i <= n; i++)
        mp[pre[i]]++;
    for (int i = n; i >= 1; i--)
    {
        mp[pre[i]]--;
        int sub = pre[i] - k;
        cnt += mp[sub];
    }
    cout << cnt << nl;
    return 0;
}