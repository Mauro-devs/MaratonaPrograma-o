#include <bits/stdc++.h>

using namespace std;

int main(){


    int num;
    int input;

    cin >> input;
    int a,b;
    

    while(input--){
        cin >> num;
        unordered_map<int,int> map;
        for(int i = 2;i<=num-1;i++){
            int restoI = num % i;
            if(map.count(restoI) == 0){
                map[restoI] = i;
            }
            else{
                a = i;
                b = map[restoI];
                break;
            }
            

            
        }
        cout << b << " " << a << "\n";
    }

    
   



    return 0;
}