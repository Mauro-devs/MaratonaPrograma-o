#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int tea, num_atual;
    int quant = 0;
    cin >> tea;

    for(int i = 0; i < 5; i++){
        cin >> num_atual;

        if(num_atual == tea){
            quant++;
        }
    }

    cout << quant << "\n";
    return 0;
}