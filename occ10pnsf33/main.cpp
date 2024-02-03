#include <iostream>
#include <string>

using namespace std;

bool verificaLlaveCerradura(const string& llave, const string& cerradura) {
    
    if (llave.length() != cerradura.length()) {
        return false;
    }

    
    for (size_t i = 0; i < llave.length(); ++i) {
        if (cerradura[i] == '.' && llave[i] == '#') {
            
            continue;
        } else if (cerradura[i] == '#' && llave[i] == '#') {
            
            return false;
        }
    }

    
    return true;
}

int main() {
    string llave, cerradura;
    cin >> llave;
    cin >> cerradura;

    if (verificaLlaveCerradura(llave, cerradura)) {
        cout << "SI" << endl;
    } else {
        cout << endl;
    }

    return 0;
}
