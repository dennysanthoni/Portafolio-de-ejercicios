#include <iostream>
using namespace std;
int main() {
    int c,i,aux=0;
    cin>>c;
    int a[c],b[c];
    for(i=0;i<c;i++){
        cin>>a[i];}
    for(i=0;i<c;i++){
        cin>>b[i];}
    for(i=0;i<c;i++){
        if(a[i]<=b[i])
        aux+=1;}
    if(aux>=1)
    cout<<"0";
    else cout<<"1";
    return 0;}
