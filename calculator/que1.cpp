#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int choice;
    int num1, num2;

    while (true) {  
        cout << "\nPress 1 for +";
        cout << "\nPress 2 for -";
        cout << "\nPress 3 for *";
        cout << "\nPress 4 for /";
        cout << "\nPress 5 for %";
        cout << "\nPress 0 for Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program...\n";
            break;    
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " 
                     << add(num1, num2);
                break;

            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " 
                     << subtract(num1, num2);
                break;

            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " 
                     << multiply(num1, num2);
                break;

            case 4:
                if (num2 == 0)
                    cout << "Error! Division by zero not allowed.";
                else
                    cout << "Division of " << num1 << " and " << num2 << " is " 
                         << divide(num1, num2);
                break;

            case 5:
                if (num2 == 0)
                    cout << "Error! Modulus by zero not allowed.";
                else
                    cout << "Modulus of " << num1 << " and " << num2 << " is " 
                         << mod(num1, num2);
                break;

            default:
                cout << "Invalid choice!";
        }
        cout << endl;
    }

return 0;
}