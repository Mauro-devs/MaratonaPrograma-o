#include <bits/stdc++.h>

using namespace std;


int main(){
    

    int C, G;

    cin >> C >> G;

    if(C == 1){
        cout << "vivo e morto";
    }
    else{
        if(G == 1){
            cout << "vivo";
        }
        else{
            cout <<"morto";
        }
    }
    return 0;
}
