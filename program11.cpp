#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

class Calculator {
public:
    static long double add(long double first, long double second) {
        return first + second;
    }

    static long double subtract(long double first, long double second) {
        return first - second;
    }

    static long double multiply(long double first, long double second) {
        return first * second;
    }

    static bool divide(long double first, long double second, long double& result) {
        if (second == 0) {
            return false;
        }
        result = first / second;
        return true;
    }

    static bool modulus(long double first, long double second, long double& result) {
        if (second == 0) {
            return false;
        }
        result = fmod(first, second);
        return true;
    }

    static bool squareRoot(long double value, long double& result) {
        if (value < 0) {
            return false;
        }
        result = sqrt(value);
        return true;
    }

    static long double power(long double base, long double exponent) {
        return pow(base, exponent);
    }

    static long double percentage(long double value, long double percent) {
        return value * percent / 100;
    }

    static bool factorial(long double value, long double& result) {
        if (value < 0 || floor(value) != value || value > 20) {
            return false;
        }

        result = 1;
        for (int i = 2; i <= static_cast<int>(value); ++i) {
            result *= i;
        }
        return true;
    }
};

long double readNumber(const char* prompt) {
    long double value;
    while (true) {
        cout << prompt;
        if ( cin >> value) {
            return value;
        }

        cout << "Invalid number. Please try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int readChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice: ";
        if (cin >> choice) {
            return choice;
        }

        cout << "Invalid choice. Please enter a number from the menu.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void printResult(long double result) {
    cout << setprecision(12) << "Result: " << result << "\n";
}

int main() {
    cout << "========== Calculator ==========\n";

    while (true) {
        cout << "\n"
                  << "1. Addition\n"
                  << "2. Subtraction\n"
                  << "3. Multiplication\n"
                  << "4. Division\n"
                  << "5. Modulus (remainder)\n"
                  << "6. Power\n"
                  << "7. Square root\n"
                  << "8. Percentage\n"
                  << "9. Factorial\n"
                  << "0. Exit\n";

        const int choice = readChoice();
        long double first;
        long double second;
        long double result;

        switch (choice) {
            case 1:
                first = readNumber("Enter first number: ");
                second = readNumber("Enter second number: ");
                printResult(Calculator::add(first, second));
                break;
            case 2:
                first = readNumber("Enter first number: ");
                second = readNumber("Enter second number: ");
                printResult(Calculator::subtract(first, second));
                break;
            case 3:
                first = readNumber("Enter first number: ");
                second = readNumber("Enter second number: ");
                printResult(Calculator::multiply(first, second));
                break;
            case 4:
                first = readNumber("Enter dividend: ");
                second = readNumber("Enter divisor: ");
                if (Calculator::divide(first, second, result)) {
                    printResult(result);
                } else {
                    cout << "Error: division by zero is not allowed.\n";
                }
                break;
            case 5:
                first = readNumber("Enter first number: ");
                second = readNumber("Enter second number: ");
                if (Calculator::modulus(first, second, result)) {
                    printResult(result);
                } else {
                    cout << "Error: modulus by zero is not allowed.\n";
                }
                break;
            case 6:
                first = readNumber("Enter base: ");
                second = readNumber("Enter exponent: ");
                printResult(Calculator::power(first, second));
                break;
            case 7:
                first = readNumber("Enter number: ");
                if (Calculator::squareRoot(first, result)) {
                    printResult(result);
                } else {
                    cout << "Error: square root of a negative number is not real.\n";
                }
                break;
            case 8:
                first = readNumber("Enter total value: ");
                second = readNumber("Enter percentage: ");
                printResult(Calculator::percentage(first, second));
                break;
            case 9:
                first = readNumber("Enter a non-negative whole number (0-20): ");
                if (Calculator::factorial(first, result)) {
                    printResult(result);
                } else {
                    cout << "Error: factorial requires a whole number from 0 to 20.\n";
                }
                break;
            case 0:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please select an option from 0 to 9.\n";
        }
    }
}
