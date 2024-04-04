#include <iostream>
using namespace std;

int main() {
    int cpf, d[10];
    cout << "Digite os 8 ou 9 números do CPF ";
    cin >> cpf;
    for(int i = 8; i >= 0; i--) {
        d[i] = cpf % 10;
        cpf /= 10;
    }
    int s1 = 0, s2 = 0;
    for(int i = 0; i < 9; i++) {
        s1 += d[i] * (10 - i);
        s2 += d[i] * (10 - i);
    }
    int v1 = 11 - (s1 % 11);
    if (v1 >= 10) v1 = 0;
    int v2 = 11 - (s2 % 11);
    if (v2 >= 10) v2 = 0;
    cout << "CPF digitado: ";
    for(int i = 0; i < 9; i++) {
        cout << d[i];
        if(i == 2 || i == 5) cout << ".";
    }
    cout << "-" << v1 << v2;
    return 0;
}
