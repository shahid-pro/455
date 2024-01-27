#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0, oddSum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;  // Extract the last digit

        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        n /= 10;  // Remove the last digit
    }

    cout << evenSum << " " << oddSum << endl;

    return 0;
}