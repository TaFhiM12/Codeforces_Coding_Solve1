#include<bits/stdc++.h>
using namespace std;
int n,k;
string s[2];
bool dfs(int i,int j,int p){
	if(j>=n)return 1;
	if(s[i][j]!='-'||p>j)return 0;
	s[i][j]='X';
	return dfs(1-i,j+k,p+1)||dfs(i,j+1,p+1)||dfs(i,j-1,p+1);
}

int main(){
	cin>>n>>k>>s[0]>>s[1];
	cout<<(dfs(0,0,0)?"YES":"NO");
	return 0;
}