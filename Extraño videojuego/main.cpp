#include <bits/stdc++.h>
using namespace std;
int m,c,n,i,ini,fin,pasos;
int manzana[22];

void lectura(){
    cin>>m>>c>>n;
    for(i=1;i<=n;i++){
        cin>>manzana[i];
    }
    ini=1; fin=c;
}

void calculo(){
    pasos=0; i=1;
    while(i<=n){
        if(manzana[i]>=ini and manzana[i]<=fin){
            i++;
        }else if(manzana[i]<ini and manzana[i]<fin){
            ini--; fin--;
            pasos++;
        }else if(manzana[i]>fin and manzana[i]>ini){
            ini++; fin++;
            pasos++;
        }
    }
    cout<<pasos<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    lectura();
    calculo();

    return 0;
}
