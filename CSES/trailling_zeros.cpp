#include <bits/stdc++.h>

using namespace std;


/*Para resolver essa questao utilizamos a Formula de Legendre.*/


int main() {
    

    int input;

    cin >> input;

    long long fatorial = 1;


    for(int i = input; i > 0; i--){
        fatorial*=i;
    }

    cout << fatorial;

    return 0;
}