#include <iostream>

using namespace std;

int main() {
    int totalTerm = 6;
    int a = 0;
    int b = 1;

    cout << a << ", "; // Print the first term (0) before the loop

    for (int i = 1; i < totalTerm; i++) { // Loop only up to totalTerm - 1
        cout << b << ", ";
        int sum = a + b;
        a = b;
        b = sum;
    }

    cout << b << endl; // Print the last term without a trailing comma

    return 0;
}
