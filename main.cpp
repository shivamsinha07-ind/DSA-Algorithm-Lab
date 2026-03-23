#include <bits/stdc++.h>
using namespace std;

extern long long bubbleOps,selectionOps,insertionOps,mergeOps,quickOps;
extern long long linearOps,binaryOps;

void bubbleSort(vector<int>&);
void selectionSort(vector<int>&);
void insertionSort(vector<int>&);
void mergeSort(vector<int>&,int,int);
void quickSort(vector<int>&,int,int);

int linearSearchFunc(vector<int>&,int);
int binarySearchFunc(vector<int>&,int);

vector<int> generateRandom(int);
vector<int> generateSorted(int);
vector<int> generateReverse(int);
vector<int> generateEqual(int);

int main(){
    int n=2000;

    vector<vector<int>> d={
        generateRandom(n),
        generateSorted(n),
        generateReverse(n),
        generateEqual(n)
    };

    for(auto arr:d){

        vector<int> a;

        a=arr;
        auto s1=chrono::high_resolution_clock::now();
        mergeSort(a,0,n-1);
        auto e1=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e1-s1).count()<<" "<<mergeOps<<endl;

        a=arr;
        auto s2=chrono::high_resolution_clock::now();
        quickSort(a,0,n-1);
        auto e2=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e2-s2).count()<<" "<<quickOps<<endl;

        a=arr;
        auto s3=chrono::high_resolution_clock::now();
        bubbleSort(a);
        auto e3=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e3-s3).count()<<" "<<bubbleOps<<endl;

        a=arr;
        auto s4=chrono::high_resolution_clock::now();
        selectionSort(a);
        auto e4=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e4-s4).count()<<" "<<selectionOps<<endl;

        a=arr;
        auto s5=chrono::high_resolution_clock::now();
        insertionSort(a);
        auto e5=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e5-s5).count()<<" "<<insertionOps<<endl;

        int t=arr[n/2];

        auto s6=chrono::high_resolution_clock::now();
        linearSearchFunc(arr,t);
        auto e6=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e6-s6).count()<<" "<<linearOps<<endl;

        sort(arr.begin(),arr.end());

        auto s7=chrono::high_resolution_clock::now();
        binarySearchFunc(arr,t);
        auto e7=chrono::high_resolution_clock::now();
        cout<<chrono::duration<double>(e7-s7).count()<<" "<<binaryOps<<endl;
    }

    return 0;
}