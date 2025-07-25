#include <bits/stdc++.h>

using namespace std;


int main(){

    int quant;
    int modulo;
    
    while(cin >> quant >> modulo && (quant !=0 || modulo != 0)){
        vector<int> vet(quant);

        for(int i = 0; i<quant; i++){
            cin >> vet[i];
        }

        sort(vet.begin(), vet.end(), [modulo](int a, int b)){
            int modA = a % modulo;
            int modB = b % modulo;

            if(modA != modB){
                return modA < modB;
            }

            bool aOdd = a % 2 != 0;
            bool bOdd = b % 2 != 0;

            if(aOdd && !bOdd) return true;
            if(!aOdd && bOdd) return false;

            if(aOdd && bOdd) return a > b;
            if(!aOdd && !bOdd) return a < b;

            return false;
        }

        cout << quant << " " << modulo << "\n";
        for(int i = 0; i<quant;i++){
            cout << vet[i] << "\n";
        }
    }

    

    cout << "0 0\n";
    return 0;
}