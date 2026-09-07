#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <limits>

using namespace std;



// CalcX Calculator


int main() {

    // Variables
    int choice;
    double num1, num2, result;

    // Stores calculation history
    vector<string> history;


    // ====================
    // Main Calculator Loop
    // ====================

    while (true) {

        cout << "\n";
        cout << "=================================" << endl;
        cout << "             CalcX" << endl;
        cout << "=================================" << endl;

        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Percentage" << endl;
        cout << "6. Power" << endl;
        cout << "7. Square Root" << endl;
        cout << "8. View History" << endl;
        cout << "9. Clear History" << endl;
        cout << "10. Exit" << endl;

        cout << "---------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        // ====================
        // Input Validation
        // ====================

        if (cin.fail()) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue;
        }


        // ====================
        // Calculator Operations
        // ====================

        switch (choice) {


            // --------------------
            // Addition
            // --------------------

            case 1:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                result = num1 + num2;

                cout << "Result: " << result << endl;

                history.push_back(
                    to_string(num1) + " + " +
                    to_string(num2) + " = " +
                    to_string(result)
                );

                break;


            // --------------------
            // Subtraction
            // --------------------

            case 2:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                result = num1 - num2;

                cout << "Result: " << result << endl;

                history.push_back(
                    to_string(num1) + " - " +
                    to_string(num2) + " = " +
                    to_string(result)
                );

                break;


            // --------------------
            // Multiplication
            // --------------------

            case 3:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                result = num1 * num2;

                cout << "Result: " << result << endl;

                history.push_back(
                    to_string(num1) + " * " +
                    to_string(num2) + " = " +
                    to_string(result)
                );

                break;


            // --------------------
            // Division
            // --------------------

            case 4:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                if (num2 == 0) {

                    cout << "Error: Cannot divide by zero." << endl;

                } else {

                    result = num1 / num2;

                    cout << "Result: " << result << endl;

                    history.push_back(
                        to_string(num1) + " / " +
                        to_string(num2) + " = " +
                        to_string(result)
                    );
                }

                break;


            // --------------------
            // Percentage
            // --------------------

            case 5:

                cout << "Enter number: ";
                cin >> num1;

                cout << "Enter percentage: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                result = (num1 * num2) / 100;

                cout << num2 << "% of "
                     << num1 << " = "
                     << result << endl;

                history.push_back(
                    to_string(num2) + "% of " +
                    to_string(num1) + " = " +
                    to_string(result)
                );

                break;


            // --------------------
            // Power
            // --------------------

            case 6:

                cout << "Enter base: ";
                cin >> num1;

                cout << "Enter exponent: ";
                cin >> num2;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                result = pow(num1, num2);

                cout << "Result: " << result << endl;

                history.push_back(
                    to_string(num1) + " ^ " +
                    to_string(num2) + " = " +
                    to_string(result)
                );

                break;


            // --------------------
            // Square Root
            // --------------------

            case 7:

                cout << "Enter number: ";
                cin >> num1;

                if (cin.fail()) {

                    cout << "Invalid number." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }

                if (num1 < 0) {

                    cout << "Error: Cannot calculate square root of a negative number." << endl;

                } else {

                    result = sqrt(num1);

                    cout << "Result: " << result << endl;

                    history.push_back(
                        "sqrt(" +
                        to_string(num1) +
                        ") = " +
                        to_string(result)
                    );
                }

                break;


            // --------------------
            // View History
            // --------------------

            case 8:

                cout << "\n========== History ==========" << endl;

                if (history.empty()) {

                    cout << "No calculations yet." << endl;

                } else {

                    for (int i = 0; i < history.size(); i++) {

                        cout << i + 1 << ". "
                             << history[i] << endl;
                    }
                }

                cout << "=============================" << endl;

                break;


            // --------------------
            // Clear History
            // --------------------

            case 9:

                history.clear();

                cout << "Calculation history cleared." << endl;

                break;


            // --------------------
            // Exit
            // --------------------

            case 10:

                cout << "\nThank you for using CalcX!" << endl;

                return 0;


            // --------------------
            // Invalid Menu Choice
            // --------------------

            default:

                cout << "Invalid choice. Please select 1-10." << endl;
        }
    }


    return 0;
}
