#include <iostream>
using namespace std;

int main() {
    string dataType;
    cin >> dataType;

    if (dataType == "Integer") {
        cout << "4";
    }
    else if (dataType == "Long") {
        cout << "8";
    }
    else if (dataType == "Float") {
        cout << "4";
    }
    else if (dataType == "Double") {
        cout << "8";
    }
    else if (dataType == "Character") {
        cout << "1";
    }

    return 0;
}