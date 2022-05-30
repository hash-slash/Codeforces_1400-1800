// Problem: A. Tokitsukaze and Strange Inequality
// Contest: Codeforces - Codeforces Round #789 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1677/A
// Memory Limit: 256 MB
// Time Limit: 1500 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define mp make_pair
#define int long long
#define fi first
#define se second
#define pb push_back
#define ll __int128
#define pi pair<int, int>
#define mod 1000000007
template<typename T> bool chkmin(T &a, T b){return (b < a) ? a = b, 1 : 0;}
template<typename T> bool chkmax(T &a, T b){return (b > a) ? a = b, 1 : 0;}

//Awwawa! Dis cold yis ratten buy Ashu!

using namespace std;

int n,t=1,temp;
vector<int>a;
const int N=1e5+5;
int sum[N]={0};

inline void solve()
{

  int ans=0;

  memset(sum,0,sizeof(sum));

  scanf("%lld",&n);

  for(int i=0;i<n;i++)
  {
    int x;
    scanf("%lld",&x);
    a.pb(x);
  }

  // NOTE: a < b < c < d

  // calculating a < c sequences first

  for(int i=1;i<=n-1;i++)
  {

    int temp=0;

      for(int j=n-1;j>=i+1;j--)
      {

        if(a[i-1]<a[j])sum[j]++;

      }

      for(int j=n-1;j>i;j--)
      {

        ans=ans+(temp*sum[j]);

        if(a[j]<a[i])temp++;

      }

  }

  printf("%lld\n",ans);

}

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	scanf("%lld",&t);
    while(t--){a.clear();solve();}


return 0;
}
