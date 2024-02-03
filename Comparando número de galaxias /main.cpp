#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a <= 0 || a >= 1000 || b <= 0 || b >= 1000 || c <= 0 || c >= 1000) {
        cout << "Por favor, ingrese números válidos entre 0 y 1000." << endl;
        return 1; // Salir del programa con un código de error
    }else{
    if(a<b)
        cout<<"True ";
    else cout<<"false " ;
    if(c>a)
        cout<<"True ";
    else cout<<"false " ;
    if(a==b)
        cout<<"True ";
    else cout<<"false " ;
    if(a!=b)
        cout<<"True ";
    else cout<<"false " ;
    if(c<=b)
        cout<<"True ";
    else cout<<"false " ;}
    return 0;
}
