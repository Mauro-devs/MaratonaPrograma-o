#include <bits/stdc++.h>

using namespace std;

int main() {
    

    int quant;

    cin >> quant;
    int cont = 0;
    while(quant--){
        int pet, vas, tony;


        cin >> pet >> vas >> tony;
        
        if((pet + vas + tony) >= 2){
            cont++;
        }
    }

    cout << cont;
    return 0;
}