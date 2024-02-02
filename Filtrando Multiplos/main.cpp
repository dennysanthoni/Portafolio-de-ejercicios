#include <iostream>
using namespace std;
int main(){
    int c,i,m;
    cin>>c;
    int a[c];
    for(i=0;i<c;i++){
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<c;i++){
        if(a[i]%m!=0)
        cout<<"X ";
        else cout<<a[i]<<" ";
    }
   return 0;
}
