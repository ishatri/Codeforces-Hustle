#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 

 
void solve()
{
  int n ;
  cin>>n;
  int a[n],b[n];
  for(int i =0;i<n;i++)
  {
    cin>>a[i]>>b[i];
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
for(int j =0;j<n;j++)
{
if(a[i]==b[j] && i!=j)
{
    ans++;
    break;
  }
}
}
cout<<n-ans<<endl;
}
 
int32_t main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

     ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}
