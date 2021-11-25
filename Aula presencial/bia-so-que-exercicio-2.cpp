#include <iostream>
using namespace std;

int main() {
    int a = 0;
    for (int b = 0; b < 10; b++) {
        int c;
        cout << "Insira um numero: ";
        cin >> c;
        if (c >= 18) a++;
    }
    cout << a << " pessoas são maiores que 18 anos. \n";
    return 0;
}