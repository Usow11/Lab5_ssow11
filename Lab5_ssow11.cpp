/**
 * @file Lab5_ssow11.cpp
 * @author Sounkarou Sow
 * @date 2025-02-21
 * @brief A modular program to generate a multiplication table using functions.
 */

#include <iostream>
using namespace std;

/**
 * @brief Outputing an error message for invalid input.
 * @param None.
 * @return None (void).
 */
void printInputValidationError()
{
    cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
}

/**
 * @brief Validating the user's input against the acceptable range.
 * @param input The user provided integer to validate.
 * @return true if the input is greater than 4 and less than 10; false otherwise.
 */
bool isMaxDigitInputValid(int input)
{
    return (input > 4 && input < 10);
}

/**
 * @brief Prompting the user for input and ensuring it is valid.
 * @param None.
 * @return A validated int representing the maximum digit.
 */
int getMaxDigitInput()
{
    int maxDigit;

    cout << "Please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10." << endl;

    do
    {
        cout << "Max Digit: ";
        cin >> maxDigit;

        if (!isMaxDigitInputValid(maxDigit))
        {
            printInputValidationError();
        }

    } while (!isMaxDigitInputValid(maxDigit));

    return maxDigit;
}

/**
 * @brief Prints the formatted multiplication table.
 * @param maxDigit The highest digit to include in the table.
 * @return None (void).
 */
void printMultiplicationTable(int maxDigit)
{
    for (int row = 1; row <= maxDigit; row++)
    {
        for (int col = 1; col <= maxDigit; col++)
        {
            cout << (row * col);

            if (col < maxDigit)
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

/**
 * @brief Entry point of the program.
 * @param None.
 * @return 0 to indicate success.
 */
int main()
{
    int maxDigit = getMaxDigitInput();
    printMultiplicationTable(maxDigit);

    return 0;
}