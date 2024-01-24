#include <iostream>
#include <cmath>
using namespace std;

float calculate_area(int ch, float radius, float length, float width) {
    switch (ch) {
        case 1: {
            return M_PI * radius * radius;
        }
        case 2: {
            return length * width;
        }
        default: {
            return -1; // Invalid choice
        }
    }
}

int main() {
    int ch;
    cout << "Enter the choice (1 for circle, 2 for rectangle): ";
    cin >> ch;

    float radius, length, width;
    switch (ch) {
        case 1: {
            cout << "Enter the radius: ";
            cin >> radius;
            break;
        }
        case 2: {
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
            return 0;
        }
    }

    float area = calculate_area(ch, radius, length, width);
    cout << "Area = " << area << endl;

    return 0;
}