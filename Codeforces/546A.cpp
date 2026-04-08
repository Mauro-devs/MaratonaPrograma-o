#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cost, dollar, quantity;
    int total_value = 0;
    cin >> cost >> dollar >> quantity;


    for(int i = 1; i < quantity+1; i++){
        total_value+= i * cost;
    }

    if(total_value < dollar){
        cout << 0;
    }
    else{
        cout << total_value - dollar;
    }


    return 0;
}