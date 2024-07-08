#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++) {
            cin>>v[i];
        }
        int fr = v[0];
        bool f = true;
        int i = 0;
        for(i = 1; i<n-1; i++) {
            if(v[i]>v[i+1]) {
                break;
            }
        }
        i++;
        v[n+1] = INT_MAX;
        for(; i<n; i++) {
            if(v[i]>fr || v[i]>v[i+1]) {
                f = false;
                break;
            }
        }
        if(f)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}