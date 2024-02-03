#include <iostream>
#include <math.h>

using namespace std;
    float denominador(float x,float y, float z);
    float GranProblema (float x,float y, float z);
int main()
{  float b,c,d;
    cin>>b>>c>>d;
    cout<<GranProblema(b,c,d);
    return 0;
}
    float GranProblema (float x,float y, float z){
        float a;
        float denominador=(x+2*y+3*z)/(z- 2*y-3*x);
        if(denominador!=0){
        a=((2*y/z)*(pow(y,3)-z))/(((x+2*y+3*z)/(z- 2*y-3*x))+pow(x,2)+pow(z,2));
        return a;}
        else{return 0;}
    }
