#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int quantInput = 0;
    int number = 0;

    cin >> quantInput;

    while (quantInput--)
    {
        bool condicao = true;
        cin >> number;
        if(number < 2){
            condicao = false;
        }
        else{
            for (int i = sqrt(number); i>=2; i--)
            {
                if(number % i == 0){
                    condicao = false;
                    break;
                }
            }
        }

        if(condicao){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not Prime" << endl;
        }
        
    }
    

    return 0;
}