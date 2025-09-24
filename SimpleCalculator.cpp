#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    // Ask the user for input
    cout << "==========================" << endl;
    cout << "   SIMPLE C++ CALCULATOR  " << endl;
    cout << "==========================" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 1; // Exit with error
            }
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1; // Exit with error
    }

    return 0;
}
