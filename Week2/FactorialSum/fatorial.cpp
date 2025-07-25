#include <bits/stdc++.h>

using namespace std;


//Retorno estava errado, estava retornando inteiro ao invés de long;
unsigned long long fatorial(int num){

    unsigned long long fatorial = 1;

    if(num == 0){
        return 1;
    }

    for(int i = 2;i<=num;i++){
        fatorial*= i;      
    }


    return fatorial;

}

int main(){
    int m,n;


    while(cin >> m >> n){
        cout << fatorial(m) + fatorial(n) << endl;
    }
    
    return 0;


}