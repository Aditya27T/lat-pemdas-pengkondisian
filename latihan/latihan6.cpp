#include <iostream>

using namespace std;

int main() {
    char grade;

    cout << "Please insert your grade (A, B, C, D, or E): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Well done!" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Better try again!" << endl;
            break;
        case 'E':
        case 'e':
            cout << "Sorry, you failed!" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }

    return 0;
}
