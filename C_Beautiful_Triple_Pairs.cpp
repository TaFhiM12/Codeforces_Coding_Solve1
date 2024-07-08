#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
typedef pair <int, int> pii;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int N = 2e5 + 20, LG = 31;
 
int t;
 
int n, a[N];
 
int32_t main() {

		ios::sync_with_stdio(false);
 
		cin >> t;
 
		while (t--) {
				cin >> n;
				for (int i = 0; i < n; i++) cin >> a[i];
 
				map <pii, int> mp1, mp2, mp3;
				map <pair<int, pii>, int> gen;
 
				int ans = 0;
 
				for (int i = 0; i < n - 2; i++) {
						int val = gen[{a[i], {a[i + 1], a[i + 2]}}];
 
						ans += mp1[{a[i], a[i + 1]}] - val;
						ans += mp2[{a[i], a[i + 2]}] - val;
						ans += mp3[{a[i + 1], a[i + 2]}] - val;
 
						mp1[{a[i], a[i + 1]}]++;
						mp2[{a[i], a[i + 2]}]++;
						mp3[{a[i + 1], a[i + 2]}]++;
						gen[{a[i], {a[i + 1], a[i + 2]}}]++;
				}
 
 
				cout << ans << '\n';
		}
}