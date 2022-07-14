 #include<bits/stdc++.h>
#include <math.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long int
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
     vector<string> v(n);
     map<string, int> freq;
     string ans="";
     for(int i =0;i<n;i++)
     {
cin>>v[i];
freq[v[i]]++;
     }

for(int i =0;i<n;i++)
{
    int x= v[i].size(), found=0;
    for(int j =1;j<x;j++)
    {
        string first = v[i].substr(0,j);
        string second = v[i].substr(j, x-j);

        if(freq.find(first)!=freq.end())
        {
            if(freq.find(second)!=freq.end())
                found=1;
        }
    }
    if(!found)
    {
        ans+= "0";
    }
    else
    {
        ans+= "1";
    }
}
cout<<ans<<endl;
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
