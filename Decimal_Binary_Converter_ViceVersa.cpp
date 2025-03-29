#include <iostream>
#include <string>

using namespace std;

int main() {
    int option;

    cout << "Choose: Convert decimal to binary (0) or binary to decimal (1): ";
    cin >> option;

    if (option == 0) {  // Decimal to Binary
        int decimalNum, remainder;
        string binaryResult = "";

        cout << "\nEnter a decimal number: ";
        cin >> decimalNum;

        while (decimalNum > 0) {
            remainder = decimalNum % 2;
            binaryResult = to_string(remainder) + binaryResult;
            decimalNum /= 2;
        }

        if (binaryResult == "") {
            binaryResult = "0";
        }

        cout << "Binary equivalent: " << binaryResult << endl;

    } else if (option == 1) {  // Binary to Decimal
        int binaryNum, decimalResult = 0, base = 1, lastDigit;

        cout << "\nEnter a binary number: ";
        cin >> binaryNum;

        while (binaryNum > 0) {
            lastDigit = binaryNum % 10;
            decimalResult += lastDigit * base;
            base *= 2;
            binaryNum /= 10;
        }

        cout << "Decimal equivalent: " << decimalResult << endl;
    } else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}