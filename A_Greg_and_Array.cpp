#include <bits/stdc++.h>
using namespace std;
const int MAX = 100001;
long long int x, y, i, a[MAX], b[MAX], c[MAX], d[MAX], l[MAX], r[MAX], n, m, k , pre[MAX];
int main() {
    
    cin >> n >> m >> k;
    for (i = 1; i <= n; ++i) cin >> a[i];

    for (i = 1; i <= m; ++i)
        cin >> l[i] >> r[i] >> d[i];
    for (i = 1; i <= k; ++i) {
        cin >> x >> y;
        b[x]++;
        b[y + 1]--;
    }

    for (i = 1; i <= m; ++i) {
        b[i] += b[i - 1];
    }
    for(int i=1 ; i<=m; i++){
        d[i] = d[i]*b[i] ;
    }
    // for(int i=1;i<=n ; i++) cout << d[i] << " ";
    // cout << endl ;
    for(int i=1;i<=m;i++){
        pre[l[i]] += d[i] ;
        pre[r[i]+1] += -d[i];
    }
    // for(int i=1;i<=n ; i++) cout << pre[i] << " ";
    // cout << endl ;
    for(int i=1 ; i<=n ; i++){
        pre[i] += pre[i-1] ;
    }
    // for(int i=1;i<=n ; i++) cout << pre[i] << " ";
    // cout << endl ;
    for(int i=1 ; i<=n ; i++){
        a[i] += pre[i];
    }
    for(int i=1;i<=n ;i++) cout << a[i] << " ";
    cout << endl ;

}
