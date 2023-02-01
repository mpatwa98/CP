#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fr first
#define sc second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
typedef long long ll;
#define all(x) (x).begin(), (x).end()

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll power(ll base, ll p){
  ll res=1;
  base=base%M;
  while(p>0){
    if(p&1){res=(res*base)%M;p--;}
    base=(base*base)%M;
    p>>=1;
  }
  return res;
}

void solve(){
  string s;
  cin>>s;
  int pos=0;
  for(int i=1;i<s.size()-1;i++){
    if(s[i]=='a'){
      pos=i;
      cout<<s.substr(0,pos)<<" "<<s[pos]<<" "<<s.substr(pos+1,s.size()-pos-1)<<"\n";
      return;
    }
  }
  cout<<s[0]<<" "<<s.substr(1,s.size()-2)<<" "<<s[s.size()-1]<<"\n";
}

int32_t main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  mt19937 rng((unsigned int)chrono::steady_clock::now().time_since_epoch().count());
  auto start = chrono::high_resolution_clock::now();

  int t;
  cin>>t;
  for(int tc=1;tc<=t;++tc){
    solve();
  }
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
  cerr << duration.count() / 1000.0 << ' '<<'m'<<'s';

  return 0;
}