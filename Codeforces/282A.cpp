#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int input;
    int contador = 0;
    cin >> input;

    while(input--){
        string a;
        cin >> a;
        
        if(a[1] == '+'){
            contador++;
        }
        else{
            contador--;
        }
    }

    cout << contador << "\n";
    return 0;
}