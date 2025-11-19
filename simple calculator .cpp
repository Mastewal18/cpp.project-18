#include <iostream>
using namespace std;

int main() {

    double a, b;     // Variables to store numbers
    char op;         // Variable to store operator

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if(op == '+') {
        cout << "Result: " << a + b;
    }
    else if(op == '-') {
        cout << "Result: " << a - b;
    }
    else if(op == '*') {
        cout << "Result: " << a * b;
    }
    else if(op == '/') {
        if(b != 0)
            cout << "Result: " << a / b;
        else
            cout << "Error! Division by zero is not allowed.";
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}