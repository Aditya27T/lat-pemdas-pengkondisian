#include <iostream>

using namespace std;

int main() {
    int bulan;

    cout << "please input month number (1-12): ";
    cin >> bulan;

    switch (bulan) {
        case 1:
            cout << "the 1st month is January" << endl;
            break;
        case 2:
            cout << "the 2nd month is February" << endl;
            break;
        case 3:
            cout << "the 3rd month is March" << endl;
            break;
        case 4:
            cout << "the 4th month is April" << endl;
            break;
        case 5:
            cout << "the 5th month is May" << endl;
            break;
        case 6:
            cout << "the 6th month is June" << endl;
            break;
        case 7:
            cout << "the 7th month is July" << endl;
            break;
        case 8:
            cout << "the 8th month is August" << endl;
            break;
        case 9:
            cout << "the 9th month is September" << endl;
            break;
        case 10:
            cout << "the 10th month is October" << endl;
            break;
        case 11:
            cout << "the 11th month is November" << endl;
            break;
        case 12:
            cout << "the 12th month is December" << endl;
            break;
        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
