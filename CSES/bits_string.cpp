#include <bits/stdc++.h>

using namespace std;

int main() {
    

    long long quant;

    long long resposta = 1;

    /*Isso e necessario pois o programa pede (Se atentar a isso!!!!!!!!!!!!!!!!)*/
    int mod = 1e9 + 7;

    cin >> quant;

    for(int i = 0; i< quant; i++){
        resposta = (resposta * 2) % mod;
    }

    
    cout << resposta;

    return 0;
}