#include <bits/stdc++.h>
using namespace std;

struct Node{
    int d;
    Node* n;
};

Node* insertNode(Node* h,int v){
    Node* t=new Node{v,NULL};
    if(!h) return t;
    Node* c=h;
    while(c->n) c=c->n;
    c->n=t;
    return h;
}

Node* deleteNode(Node* h,int v){
    if(!h) return h;
    if(h->d==v) return h->n;
    Node* c=h;
    while(c->n && c->n->d!=v) c=c->n;
    if(c->n) c->n=c->n->n;
    return h;
}

bool searchNode(Node* h,int v){
    while(h){
        if(h->d==v) return true;
        h=h->n;
    }
    return false;
}