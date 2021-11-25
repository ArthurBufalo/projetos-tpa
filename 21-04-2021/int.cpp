#include <iostream>
using namespace std;

//Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

int main() {
    int number;
    cout << "Insira um número: ";
    cin >> number;
    if (number >= 0) {
        cout << number;
        cout << " é positivo\n";
    }
    else {
        cout << number;
        cout << " é negativo\n";
    }
}