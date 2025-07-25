#include <bits/stdc++.h>

using namespace std;

int main(){

    string input1, input2;
    int tamanho = 0;

    cin >> input1;
    cin >> input2;


    bitset<128> input1bin(input1);
    bitset<128> input2bin(input2);

    bitset<128> resultado = (input1bin ^ input2bin);

    string result = resultado.to_string();
    result = result.substr(result.length() - input1.length(), input1.length());

    cout<<result;

    return 0;
}