#include <iostream>
using namespace std;
int main(){
    int oh1,oh2,th1,th2;
    cin>>oh1>>oh2>>th1>>th2;
    if(oh1>oh2&&th1>th2){
        cout<<"Hueso 1";
    }else if (oh1<oh2&&th1<th2){
        cout<<"Hueso 2";
    }else{cout<<"Perrito confundido :(";}
   return 0;
}
