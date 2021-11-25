#include <iostream>
using namespace std;

int main() {
    float S = 0;
    int d = 37;
    for (int i = 0; i < d; i++) {
        int o = d - i;
        cout << "S = " << o << '*' << o + 1 << '/' << i + 1 << "\n";
        S += (o*o+1) / (i+1);
    }
    cout << "Final: " << S << "\n";
}