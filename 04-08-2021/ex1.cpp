#include <iostream>
#include <sstream>
using namespace std;
int main() {
int index = 0;
int nums = 0;
while (true) {
    cout << "Type a number or type 'done': ";
    string s;
    cin >> s;
    if (s == "done") {
        cout << "printing results\n";
        cout << "Total sum: " << nums << '\n';
        cout << "Numbers entered: "<< index << '\n';
        cout << "Average: " << nums / index << '\n';
        return 0;
    }
    else {
        stringstream sint(s);
        int i;
        sint >> i;
        if (i > 13 && i < 73) {
            nums += i;
            index++; 
        }
        else {
            cout << "Number smaller than 13 or greater than 73. Ignoring...\n";
        }
    }
    
}
}