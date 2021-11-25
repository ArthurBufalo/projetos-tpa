#include <iostream>
using namespace std;

int main () {
    int price;
    cout << "Insira o preço da mercadoria: R$";
    cin >> price;
    cout << "O preço da mercadoria com 10% de desconto é: R$" << price*0.9 << "\n";
    return 0;
}