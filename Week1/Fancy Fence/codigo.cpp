#include <bits/stdc++.h>
using namespace std;
int main() {
    int repete;
    cin >> repete;

    for(int i = 0; i < repete; i++){
        double a;
        cin >> a ;

        double res =  360 / (180 - a);
        int verificar = static_cast<int>(res);
        if( res - verificar > 0.0 ){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}