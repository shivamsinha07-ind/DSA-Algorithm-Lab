#include <bits/stdc++.h>
using namespace std;

long long binaryOps=0;

int binarySearchFunc(vector<int>& a,int x){
    int l=0,r=a.size()-1;
    while(l<=r){
        binaryOps++;
        int m=(l+r)/2;
        if(a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}