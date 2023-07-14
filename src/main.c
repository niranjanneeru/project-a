#include <stdio.h>

/// This is a *function* to add two numbers
/// This is similar to subtract()
/// @param a integer, first number
/// @param b integer, second number
/// @returns the sum
/// @see main()
int add(int num1, int num2) {
    return num1 + num2;
}

/// This is a *function* to subtract two numbers
/// @param a integer, first number
/// @param b integer, second number
/// @returns the difference
/// @see main()
/// @note Can give negative numbers
int subtract(int num1, int num2) {
    return num1 - num2;
}

/// This is a *function* to multiply two numbers
/// @param a integer, first number
/// @param b integer, second number
/// @returns the product
/// @see main()
/// @warning Can cause overflow
int multiply(int num1, int num2) {
    return num1 * num2;
}

/// This is a *function* to divide two numbers
/// @param a integer, first number
/// @param b integer, second number
/// @returns the quotient
/// @see main()
/// @attention Make sure num2 is not zero
float divide(int num1, int num2) {
    if (num2 != 0) {
        return (float)num1 / num2;
    }
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

/// This is a Driver Function
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide(num1, num2));

    return 0;
}
