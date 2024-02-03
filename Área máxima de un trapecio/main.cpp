#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    // Calculamos el área del trapecio
    int area = (a + b) * (c + d) / 2;
    cout <<area << endl;
    return 0;}
