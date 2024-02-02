#include <iostream>

using namespace std;

int main()
{  
    int bucle;
    cin>>bucle;
    int a[bucle];
    for(int i =0;i<bucle;i++){
        cin>>a[i];
    }
    int b[bucle];
    for(int i =0;i<bucle;i++){
        cin>>b[i];
    }
    int final=0;
    for(int i =0;i<bucle;i++){
        final=final+a[i]*b[i];
    }
    cout<<final;
    return 0;
}
