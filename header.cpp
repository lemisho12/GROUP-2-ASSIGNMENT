#include <iostream>
using namespace std;
void showmenu ();
double add (double a, double b);
2, result;
    
        do {
            showMenu();
            cout << "Enter you
int main() {
        int choice;
        double num1, numr choice (1-5): ";
            cin >> choice;
    
            if (choice == 2) {
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
    
                result = add(num1, num2);
                cout << "Result: " << result << endl;
            } else if (choice == 5) {
                cout << "Exiting the calculator." << endl;
                break;
            } else {
                cout << "Invalid choice. Please select again." << endl;
            }
        } while (choice != 5);

}


    return 0;
 
   
}
// Function definitions
void showMenu() {
    cout << "\n===== Simple Calculator =====" << endl;
    cout << "1. additioin (+)" << endl;
    cout << "5. Exit" << endl;
}

double add(double a, double b) {
    return a + b;
}