#include <iostream>
using namespace std;

int main() {
    char drink;
    char type;

    cout << "What do you want? (c = coffee, t = tea): ";
    cin >> drink;

    if (drink == 'c') {
        cout << "Hot or cold? (h = hot, l = cold): ";
        cin >> type;

        if (type == 'h') {
            cout << "Making hot coffee...May be ,sir you love the coffee most!" << endl;
        } else if (type == 'l') {
            cout << "Making cold coffee..." << endl;
        } else {
            cout << "Unknown coffee type." << endl;
        }

    } else if (drink == 't') {
        cout << "Making tea..." << endl;
    } else {
        cout << "Only coffee or tea is available." << endl;
    }

    return 0;
}
