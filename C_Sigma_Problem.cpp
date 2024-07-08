#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
const int mod = 1e8;
int32_t main()
{
    optimize();
    int t = 1 ;
    while(t--){
        int n, ans = 0;
        cin >> n;
        vector<int>v(n),pref(n+1,0),diff(n+1);
        for(int i = 0; i< n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i = 0; i<n; i++){
            pref[i+1] = pref[i]+v[i];
        }
        cout<<endl;
        for(int i = 0; i<n; i++){
            int upper = 1e8 - v[i] - 1;
            auto it = upper_bound(v.begin()+i+1,v.end(),upper);
            it--;
            int middleElements = (it-v.begin()) - i,last = it-v.begin();
            diff[i]+=middleElements;
            if(i+1<n) diff[i+1]-= (middleElements-1);
            if(last+1<n) diff[last+1]--;
            ans+=((pref[n]-pref[last+1])+v[i]*(n-1-last))%mod;
        }
        for(int i = 1; i<n; i++){
            diff[i]+=diff[i-1];
        }
        for(int i = 0; i<n; i++){
            ans+=(diff[i]*v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}