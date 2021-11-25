#include <iostream>
using namespace std;

/*
Faça um programa que receba a idade de um nadador e mostre a sua categoria usando as regras a seguir:

Categoria

Infantil
    5 a 7
Juvenil
    8 a 10
Adolescente
    11 a 15
Adulto
    16 a 30
Sênior
    Acima de 30
*/

int main() {
    int age;
    cout << "Insira sua idade: ";
    cin >> age;
    if (age >= 5 && age <= 7) {
        cout << "Infantil\n";
    } 
    else if (age >= 8 && age <= 10) {
        cout << "Juvenil\n";
    } 
    else if (age >= 11 && age <= 15) {
        cout << "Adolescente\n";
    } 
    else if (age >= 16 && age <= 30) {
        cout << "Adulto\n";
    } 
    else cout << "Senior\n";
}