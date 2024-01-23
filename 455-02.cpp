#include <iostream>
using namespace std;

int main() {
    string dataType;
    cin >> dataType;

    int size = 0;

    switch(dataType[0]) {
        case 'Integer':
            size = 4;
            break;
        case 'Long':
            size = 8;
            break;
        case 'Float':
            size = 4;
            break;
        case 'Double':
            size = 8;
            break;
        case 'Character':
            size = 1;
            break;
    }

    cout << size << endl;

    return 0;
}