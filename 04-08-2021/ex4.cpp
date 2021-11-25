#include <iostream>
using namespace std;

int main() {
int n;
int S = 0;
cout << "n = ";
cin >> n;
for (int i = 1; i <= n; i++) {
    S += (i/n-(i-1));
    cout << i << "/" << n << "-" << i-1 << "\n";
}
cout << "S = " << S << "\n";
}