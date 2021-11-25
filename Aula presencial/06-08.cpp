#include <iostream>
using namespace std;

int main() {
    //Exercicio 17
    int dividendo, S = 0;
    cout << "Insira o valor do dividendo: ";
    cin >> dividendo;
    for (int i = 0; i < dividendo; i++) {
        S += ((dividendo-i)*((dividendo-i)+1))/(i+1);

    }
}