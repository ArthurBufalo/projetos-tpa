#include <iostream>
using namespace std;

int main() {
    int weight;
    cout << "Insira seu peso (em Kg): ";
    cin >> weight;
    cout << "Caso engorde 15%, seu peso será: " << weight*1.15 << "Kg\n";
    cout << "Caso emagreça 20%, seu peso será: " << weight*0.8 << "Kg\n";
    return 0;
}