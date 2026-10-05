#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
/*
-> Left Child of Node i : 2*i+1
   Right Child of Node i : 2*i+2

-> There are Two case in comparing two intervals

* Complete Overlap : [ql,qr] , [l,r]
  if ql <= l && r <= qr
  then we include all node values of node [l,r]
  and rest find values of [ql,l-1] and [r+1,qr]
exp : 
    [1,5]  , [2,3] 
    so answer of 
    [1,5] = [1,1] + [2,3] + [4,5]
    so we include whole node [2,3] for answer

* Partial Overlap : [ql,qr] , [l,r]
    if l <= ql && qr <= r
    Partial Overlap = Compelete overlap + no overlap
* No Overlap then return 0 

-> Time Comp of opeartions : 
     Build : O(n)
     Query : O(log(n))
     Update : O(log(n))
     SC : O(n)
    
 */ 
vector<int>tree;
vector<int>v;
class Segment_tree {
    private:
    vector<int>tree,v;
    int n;
    void build(int idx,int l,int r) {
        if(l == r) return {
            tree[idx] = v[r];
            return;
        }
        int mid = (l+r)/2;
        build(2*idx+1,l,mid);
        build(2*idx+2,mid+1,r);
        tree[idx] = tree[2*idx+1] + tree[2*idx+2];
    }
    int query(int idx,int l,int r,int ql,int qr) {
        // No Overlap 
        if(r < ql || l > qr) return 0;
        // Complete Overlap 
        if(ql <= l && r <= qr) return tree[idx];
        // Partial Overlap 
        int mid = (l+r)/2;
        int lf = query(2*idx+1,l,mid,ql,qr);
        int rt = query(2*idx+2,mid+1,r,ql,qr);
        return lf+rt;
    }
    void update(int idx,int l,int r,int pos,int vl) {
        if(l == r) {
            v[l] = vl;
            tree[idx] = vl;
            return;
        }
        int mid = (l+r)/2;
        if(pos <= mid) { // go the left child
            update(2*idx+1,l,mid,pos,vl);
        } else { // go to right child
            update(2*idx+2,mid+1,r,pos,vl);
        }
        tree[idx] = tree[2*idx+1]+tree[2*idx+2];
    }
    public:
    Segment_tree(vector<int>&a) {
        v = a;
        n = a.size();
        tree.resize(4*n);
        build(0,0,n-1);
    }
    int get_sum(int l,int r) return query(0,0,n-1,l,r);
    void set_value(int ps,int vl) update(0,0,n-1,ps,vl);
}



int main() {

    int n; cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    Segment_tree t(v);
    return 0;
}
