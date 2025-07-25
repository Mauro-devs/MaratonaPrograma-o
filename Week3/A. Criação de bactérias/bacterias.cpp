#include <bits/stdc++.h>

using namespace std;

int main(){

    int num;
    int minBac = 0;

    cin >> num;


    while(num > 0){

        //Bitwise / operação bit por bit
        if(num & 1 == 1){
            minBac++;
        }

        num/= 2;
    }
    cout << minBac;
   
    return 0;
}