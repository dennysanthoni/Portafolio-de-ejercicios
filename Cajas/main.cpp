#include <bits/stdc++.h>
using namespace std;
int cubeta[100002];
int n,i,valor,contador;

int calculo(int n,int i){
    if(i>n){
        return contador;
    }else{
        cin>>valor;
        if(cubeta[valor]==1){
            calculo(n,i+1);
        }else{
            cubeta[valor]=1;
            contador++;
            calculo(n,i+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    contador=0;
    i=1;
    cout<<calculo(n,1);

    return 0;
}
