#include <iostream>
using namespace std;
int main() {
  int i,a,menor=999999,suma,aux=0;
  cin>>a;
  for(i=0;i<a;i++){
      cin>>suma;
      aux += suma;
      if(suma<menor)
      menor=suma;
  }
  cout<<aux - menor;
    return 0;}
