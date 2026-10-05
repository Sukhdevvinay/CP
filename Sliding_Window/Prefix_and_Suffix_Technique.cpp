#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

// We have to find the Maximum OR of subarray of size K.
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin>>tc;
    while(tc--) {
        
      int n,k; cin>>n>>k;
      vector<int>v(n);
      for(auto &i:v) cin>>i;
      vector<int>pf(n),sf(n);
      pf[0] = v[0];
      for(int i = 1; i < n; i++) {
        if(i % k == 0) pf[i] = v[i];
        else pf[i] = pf[i-1] | v[i];
      }
      sf[n-1] = v[n-1];
      for(int i = n-2; i >= 0; i--) {
        if(i % k == k-1) sf[i] = v[i];
        else sf[i] = sf[i+1] | v[i];
      }
      int l = 0;
      int r = k-1; // Beacuse we have tottal n-k+1 windows in n length array 
      while(r < n) {
        int cr = pf[r] | sf[r-k+1];
        ans = max(ans,cr);
        r++;
      }
      cout<<ans<<endl; // Maximum or of window of size k.
    }
}   
