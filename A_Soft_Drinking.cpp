#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main(){
	optimize();
   	int f , b,v,p,w,s,d,td,tl ,mn;
   	cin >> f >> b>>v>>p>>w>>s>>td>>d ;
   	tl = (b*v)/td;
   	p = (p*w) ;
   	s = s / d ;
   	mn = (min(tl ,min(p,s)))/f ;
   	cout << mn <<nl;
   	return 0 ;
}