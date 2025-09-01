#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout <<"Enter first number : " ;
    cin >> num1;

    cout <<"Enter second number : " ;
    cin >> num2;

    cout <<"choose operations (+ , - , * , /) : ";
    cin >> op;

    if (op == '+') {
        result = num1 + num2;
        cout << "Result = " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result = " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result = " << result << endl;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1/num2;
            cout << "Result = " << result << endl;
        } else {
            cout <<"Error! Dividion by zero is not allowed." << endl;
        }
    } else {
        cout <<"Invalid operations!" << endl;
    }
    return 0;
}