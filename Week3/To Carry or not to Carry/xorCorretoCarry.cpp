#include <bits/stdc++.h>

using namespace std;

int main() {
    
    unsigned int num1, num2, resultado;
    cin >> num1 >> num2;
    
    while (num2!= 0) {
        unsigned int carry = (num1 & num2) << 1;
        
        num1 = (num1 ^ num2);
        num2 = carry;
        resultado = num1;
    }

    cout << resultado << endl;
    
    return 0;
}