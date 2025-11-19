#include <iostream>
using namespace std;

int main() {

    double x, y;     // Variables to store numbers
    char op;         // Variable to store operator

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter y: ";
    cin >> y;

    if(op == '+') {
        cout << "Result: " << x + y;
    }
    else if(op == '-') {
        cout << "Result: " << x - y;
    }
    else if(op == '*') {
        cout << "Result: " << x * y;
    }
    else if(op == '/') {
        if(y != 0)
            cout << "Result: " << x / y;
        else
            cout << "Error! Division by zero is not allowed.";
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}
