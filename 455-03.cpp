#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    if (a < b) {
        cout << "smaller";  // Semicolon added here
    } else if (a > b) {
        cout << "greater";
    } else {
        cout << "equal";
    }

    return 0;
}
