#include <bits/stdc++.h>
using namespace std;

long long linearOps=0;

int linearSearchFunc(vector<int>& a,int x){
    for(int i=0;i<a.size();i++){
        linearOps++;
        if(a[i]==x) return i;
    }
    return -1;
}