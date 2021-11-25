#include <iostream>
using namespace std;

/*
Faça um programa que receba o preço de um produto e o seu código de origem e mostre a sua procedência. A procedência obedece a tabela aseguir;
Código de origem

Procedência

1: Sul
2: Norte
3: Leste
4: Oeste
5 ou 6: Nordeste
7 ou 8 ou 9: Sudeste
10 a 20: Centro- Oeste
21 a 30: Nordeste
Exiba "produto importado" quando um código não for encontrado.
*/

int main() {
    int code;
    int price;
    cout << "Insira o preço do produto: R$";
    cin >> price;
    cout << "Insira o numero de procedencia: ";
    cin >> code;
    cout << "Preço: R$";
    cout << price;
    cout << " Procedencia: ";
    if (code < 10) {
        if (code < 5) {
            switch (code) {
                case 1: {
                    cout << "Sul\n";
                    break;
                }
                case 2: {
                    cout << "Norte\n";
                    break;
                }
                case 3: {
                    cout << "Leste\n";
                    break;
                }
                case 4: {
                    cout << "Oeste\n";
                    break;
                }
            }
        }
        else if (code == 5 || code == 6) {
            cout << "Nordeste\n";
        }
        else if (code >= 7 && code <= 9) {
            cout << "Sudeste\n";
        }
    }
    else if (code <= 20) {
        cout << "Centro-Oeste\n";
    }
    else if (code <= 30) {
        cout << "Nordeste\n";
    }
    else cout << "Importado\n";
}