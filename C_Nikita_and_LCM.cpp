#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
int t,n,m,a[200005];

int32_t main(){
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> mp;
		for (int i=1;i<=n;i++) {
			cin>>a[i];
			mp[a[i]]=1;
		}
		int zz=0;
		sort(a+1,a+1+n);
		for (int i=n;i>=1;i--){
			int x=a[i],z=0,zzz=1;
			for (int j=i-1;j>0;j--){
				int y=x*a[j]/__gcd(x,a[j]);
				if (y>a[n]) {
					z=j;break;
				}
				if (mp[y]==0){
					x=y;
					z++;
				}if (z==0&&x%a[j]==0) zzz++;
			}
			if (z) zz=max(z+zzz,zz);
			
		}cout<<zz<<endl;
		
	}
}