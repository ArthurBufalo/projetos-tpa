#include <iostream>
using namespace std;

int main() {
    int minsalary;
    int salary;
    cout << "Insira o valor do salário minimo: R$";
    cin >> minsalary;
    cout << "Insira o valor do seu salário: R$";
    cin >> salary;
    cout << "Você ganha " << salary/minsalary << " salários minimos\n";
    return 0;
}