#include <iostream>
using namespace std;

/*
Faça um programa para calcular e mostrar o salário reajustado de um funcionário. Sabe-se que o percentual de aumento é o mesmo da tabela a seguir.
Percentual de aumento:
Até R$ 1200,00
    35%
Acima de R$ 1200,00
    15%
*/

int main() {
    int salary;
    cout << "Insira seu salario: ";
    cin >> salary;
    if (salary > 1200) {
        cout << salary * 1.15;
        cout << " é o salario reajustado";
    }
    else {
        cout << salary * 1.35;
        cout << " é o salario reajustado";
    }
}