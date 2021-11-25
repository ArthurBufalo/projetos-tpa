#include <iostream>
using namespace std;

int main() {
    int bia = 20;
    int vet[bia];
    bool bruno;
    for (int arthur = 0; arthur < bia; arthur++) 
    {
        cout << "insira mais " << bia-arthur << " numero(s) ";
        cin >> vet[arthur];
    }
    for (int arthur = 0; arthur < bia; arthur++) {
        if (vet[arthur] == 30) {
            cout << "Numero 30 encontrado na posição " << arthur << "\n";
            bruno = true;
        }
    }
    if (bruno != false)
    cout << "Nenhum numero 30 encontrado\n";
    return 0;
}