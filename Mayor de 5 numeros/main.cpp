#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,mayor;
    int *p[5]={&a,&b,&c,&d,&e};
    cout<<"ingrese 5 numeros : "<<endl;
    cin>>a >> b >> c >> d >> e ;
    for (int i = 0;i<5;i++)
        if(*p[i]>mayor){
            mayor=*p[i];
        }
    cout<<"el numero mayor es: "<<mayor<<endl;
    return 0;
}
