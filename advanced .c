// 31. Simple Calculator using Switch-Case

#include <stdio.h>

int main() {
    char op;       // Operator store koribo
    double num1, num2; // Duita number store koribo

    // Operator loi ase
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Space diya hoise jate newline ignore kore

    // Duita number loi ase
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case operator anusar operation kore
    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
// 32. Factorial using Recursion
#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if(n == 0 || n == 1) // Base case: 0! or 1! = 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial call kori result print kore
    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
}
// 33. Nth Fibonacci Number using Recursion

#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if(n == 0) // Base case: 0th term = 0
        return 0;
    else if(n == 1) // Base case: 1st term = 1
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2); // Recursive sum of previous two
}

int main() {
    int n;

    // User pora position loi ase
    printf("Enter the position (n): ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d = %d\n", n, fibonacci(n));

    return 0;
}
 
