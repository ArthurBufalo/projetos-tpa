#include <iostream>
using namespace std;

int main() {
    int rodadas = 0;
    int even = 0;
    int odd = 0;
    while (rodadas < 20) {
        cout  << " Insira um número ";
        int valor;
        cin >> valor;
        if (valor % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
        rodadas++;
    }
    cout<< " São " << even<< " Números pares\n";
    cout<< " São " << odd<< " Números ímpares\n";
    return 0;
}