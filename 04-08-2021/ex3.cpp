#include <iostream>
using namespace std;
int main() {
int index = 0;
int idade = 0;
int peso = 0;
while (index < 7) {
    cout << "Insira a idade: ";
    int a;
    cin >> a;
    idade += a;
    cout << "Insira o peso: ";
    int b;
    cin >> b;
    if (b > 90) {
        peso++;
    }
    cout << "Idade: " << a << "  Peso: " << b << "Kg\n";
    index++;
}
int media = idade/7;
cout << peso << " pessoa(s) tem mais de 90Kg\n";
cout << "A media de idade das 7 pessoas são " << media << " anos\n";
return 0;
}