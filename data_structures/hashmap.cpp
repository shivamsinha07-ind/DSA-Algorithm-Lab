#include <bits/stdc++.h>
using namespace std;

void hashmapTest(){
    unordered_map<int,int> mp;
    for(int i=0;i<1000;i++) mp[i]=i*i;
    mp.erase(10);
    int x=mp[20];
}