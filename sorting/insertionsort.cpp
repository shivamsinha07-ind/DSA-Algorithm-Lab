#include <bits/stdc++.h>
using namespace std;

long long insertionOps = 0;

void insertionSort(vector<int>& a){
    int n=a.size();
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            insertionOps++;
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}