#include <bits/stdc++.h>
using namespace std;

long long selectionOps=0;

void selectionSort(vector<int>& a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int mn=i;
        for(int j=i+1;j<n;j++){
            selectionOps++;
            if(a[j]<a[mn]) mn=j;
        }
        swap(a[i],a[mn]);
    }
}