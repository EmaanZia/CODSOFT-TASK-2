#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter the first numbers: ";
    cin >> num1;
    cout << "Enter the second numbers: ";
    cin >>num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}
