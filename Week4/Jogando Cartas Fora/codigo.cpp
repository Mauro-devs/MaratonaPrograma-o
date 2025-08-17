#include <bits/stdc++.h>

using namespace std;

int main(){

    
    int valor;

    while(cin >> valor && valor != 0){
        queue<int> lista, descarte;

        for(int i = 1; i<=valor;i++){
            lista.push(i);
        }
        for (int j = 1; j <valor; j++)
        {
            descarte.push(lista.front());
            lista.pop();
            lista.push(lista.front());
            lista.pop();
        }

        cout << "Discarded cards:";
        if(!descarte.empty()){

            cout<<" " << descarte.front();
            descarte.pop();

        }

        while (!descarte.empty()){

            cout << ", " << descarte.front();
            descarte.pop();

        }
        

            cout << "\nRemaining card: " << lista.front() << "\n";
    }

    return 0;
    

}