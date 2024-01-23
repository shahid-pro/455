#include <iostream>
#include <string>

using namespace std;

int main() {
    string data_type;
    cout << "Enter data type: ";
    cin >> data_type;

    int size;
    if (data_type == "Integer") {
        size = 4;
    } else if (data_type == "Long") {
        size = 8;
    } else if (data_type == "Float") {
        size = 4;
    } else if (data_type == "Double") {
        size = 8;
    } else if (data_type == "Character") {
        size = 1;
    } else {
        cout << "Invalid data type." << endl;
        return 1;
    }

    cout << "Size of " << data_type << ": " << size << " bytes" << endl;

    return 0;
}
