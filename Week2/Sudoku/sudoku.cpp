#include <bits/stdc++.h>
using namespace std;

int main(){

    int input;

    cin >> input;

    int matriz [9*input][9*input];



    for(int i =0; i<9;i++){
        for(int j = 0;j<9;j++){
            cin >> matriz [i] [j];
        }
    }

    int repete = 0;

    for(int i = 0; i<9;i++){
        for(int j = 1; j<9;j++){
            if(matriz[i][j] == matriz[i][j]){
                repete++;
            }
        }
    }

    if(repete!= 0){
        
    }

    return 0;
}
