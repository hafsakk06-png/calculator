#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op, choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Choose operation (+, -, *, /): ";
        cin >> op;

        if (op == '+') {
            result = num1 + num2;
        } 
        else if (op == '-') {
            result = num1 - num2;
        } 
        else if (op == '*') {
            result = num1 * num2;
        } 
        else if (op == '/') {
            if (num2 != 0) result = num1 / num2;
            else {
                cout << "Error! Division by zero." << endl;
                continue; // You can skip this round
            }
        } 
        else {
            cout << "Invalid operator!" << endl;
            continue;
        }

        cout << "Result = " << result << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
