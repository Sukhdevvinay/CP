#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

/* Related Keys
-> right rotation : (ps+rt) % n // rt : no. of rotations
-> left rotation : (ps-(rt % n)+n) % n
-> number of times of an element at index i appears across all subarrays of an array of size n is 
-> Occurences : i*(n-i+1) for 1 based index 
-> Occurences : (i+1)*(n-i)
-> 'a' - 32 = 'A' same for all letters
-> a+b = a^b + 2*(a&b)
-> a+b = a|b + a&b
-> ax+by = n
    
    if b % a = 1
    z = n % a
    then => (n-z*b) % a == 0

-> if we have a sum s = n*(n+1)/2 , which is a sum of 1 to n
    so that 
    we can form any type of sum from 1 to s; using at most n distnict numbers where 
    numbers are from 1 to n
    
-> sort of vector in range of index form [a,b]

   *** sort(v.begin()+a,v.begin()+b+1);

-> When We have to find such things in a given range lipe sum which l <= sum <= r
    so we can find using this 

    ** [l <= sum <= r] = [sum <= r] - [sum <= l-1]

-> For Checking two intervals is intersacting or not 
   Best way to check non intersecting in 2 lines
   [l1,r1] , [l2,r2]
    ** (r1 < l2 || r2 < l1) -> non intersacting case only
-> For Solving Any question using two pointer bw two array think about these 3 cases , means what happens at these 3 cases 
    * v[i] == v[j]
    * v[i] < v[j]
    * v[i] > v[j]
    
-> If I want to check if number n can be form by some equation then we can check by using this Idea of Number Theorey with 
    given value of a , b
    * N = a^x + b*y 
    -> check for every power of a from [1,x] and then b*y - a^p , check this expression is divisble by b or not
    int p = 1;
    bool z = 0;
    if(p == 0) { // power of a 
        if((n-1) % b == 0)  z= 1; 
    } else {
        while(p <= n) {
            if((n-p) % b == 0) {
                z = 1;
                break;
            }
            p = p*a;
        }
    }
    if(z) cout<<"Yes"<<endl;
    else cout<<"No"<<endl; 

-> 
*/




int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin>>tc;
    while(tc--) {
        
        int n; cin>>n;
        vector<int>v(n);
        for(auto &i:v) cin>>i;
        vector<int>pf(n),sf(n);
        pf[0] = v[0];
        for(int i = 1; i <)
    }
}   
