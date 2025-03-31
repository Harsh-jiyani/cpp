#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    char cont;

    do {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

        cout << "Select operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "The sum is: " << a + b << endl;
                break;
            case 2:
                cout << "The difference is: " << a - b << endl;
                break;
            case 3:
                cout << "The product is: " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "The quotient is: " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
}
