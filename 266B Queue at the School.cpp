#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w" ,stdout);
	#endif
int n,t;
cin>>n>>t;
string s;
cin>>s;
for(int i=0;i<t;i++) 
	for(int j=0;j<n;j++)
		if(s[j]=='B'&&s[j+1]=='G')
			{
				swap(s[j],s[j+1]);
				j++;
			}
		cout<<s;
return 0;
}
