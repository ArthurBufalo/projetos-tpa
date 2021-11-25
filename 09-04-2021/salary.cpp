#include <iostream>
using namespace std;

int main() {
    int salary;
    int sells;
    cout << "Insira seu salário fixo: R$";
    cin >> salary;
    cout << "Insira o valor de vendas: R$";
    cin >> sells;
    cout << "Salario final: R$" << salary+sells*0.04 << "\n";
    return 0;
}