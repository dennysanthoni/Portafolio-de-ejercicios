#include <iostream>
using namespace std;
    void dibujo(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==n- 1){
                    cout<<"@";
                }else{cout<<" ";}
            }
            cout<<endl;
        }
    }

int main(){
    int a;
    cin>>a;
    dibujo(a);
    
   return 0;
}
