#include <bits/stdc++.h>
using namespace std;
#define int long long
// 1 -> Number of Divisors in nlogn
int number_of_divisors(int x) {
    int n = 1e6;
    vector<vector<int>>v(n+1);
    for(int i = 1; i <= n; i++) { // precompute
        for(int j = i; j <= n; j+=i) {
            v[j].push_back(i);
        }
    }
    return v[x];
}
