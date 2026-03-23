#include <bits/stdc++.h>
using namespace std;

vector<int> insertAt(vector<int> a,int pos,int val){
    a.insert(a.begin()+pos,val);
    return a;
}

vector<int> deleteAt(vector<int> a,int pos){
    if(pos>=0 && pos<a.size()) a.erase(a.begin()+pos);
    return a;
}

int searchArr(vector<int>& a,int x){
    for(int i=0;i<a.size();i++){
        if(a[i]==x) return i;
    }
    return -1;
}