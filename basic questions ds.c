// 1. “Hello, World!” Print
#include <stdio.h>  // Standard Input Output header file

int main() {
    // "Hello, World!" print kori bole printf() use kora hoy
    printf("Hello, World!\n");

    return 0; // Program successfully execute korile 0 return kore
}
//2. Input Two Numbers and Print Their Sum
#include <stdio.h>

int main() {
    int a, b, sum; // Tinita variable declare kora hoise: a, b, aru sum

    // Duita number user pora loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); // User e duta number diye, scanf() e receive kore

    sum = a + b; // a aru b jog kore result sum at store kore

    // Result print kore
    printf("Sum: %d\n", sum);

    return 0;
}
// 3. Area of a Circle (Given Radius)
#include <stdio.h>
#define PI 3.14159 // PI constant define kora hoise

int main() {
    float radius, area; // Radius aru Area declare kora hoise float type

    // User pora radius loi ase
    printf("Enter radius: ");
    scanf("%f", &radius); // Float type number receive koribo

    // Circle or area formula: p * r * r
    area = PI * radius * radius;

    // Area print kore
    printf("Area of Circle: %.2f\n", area); // %.2f mane 2 decimal place print koribo

    return 0;
}
//4. Swap Two Numbers using Temporary Variable
#include <stdio.h>

int main() {
    int a, b, temp; // Tinita variable declare: a, b, temp (temporary)

    // Duita number user pora loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping process:
    temp = a; // temp at a store kora hoise
    a = b;    // a loi b or value
    b = temp; // b loi temp or value, juntu a asil

    // Swapped result print kore
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
// 5. Find the Largest of Two Numbers
#include <stdio.h>

int main() {
    int a, b; // Duita variable declare kora hoise

    // User pora value loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare kori boro number print kore
    if (a > b)
        printf("Largest number is: %d\n", a);
    else
        printf("Largest number is: %d\n", b);

    return 0;
}
//6. Check Whether a Number is Even or Odd

#include <stdio.h>

int main() {
    int n;

    // User pora ekhon number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Even or odd check kori ase
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    return 0;
}
//7. Check Whether a Year is Leap Year or Not

#include <stdio.h>

int main() {
    int year;

    // User pora year loi ase
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year rule check kore
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);

    return 0;
}
// 8. Find the Factorial of a Given Number

#include <stdio.h>

int main() {
    int i, n;
    unsigned long long fact = 1; // Boro number hold koriboloi long long

    // User pora ekhon number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 pora n logot guni guni factorial calculate kora hoise
    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    // Result print kore
    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}
//9. Print the Multiplication Table of a Number

#include <stdio.h>

int main() {
    int n, i;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 pora 10 logot multiply kori print kore
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
// 10. Reverse a Given Number

#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Number khon reverse kora hoise digit wise
    while(n != 0) {
        rem = n % 10;         // Last digit loise
        rev = rev * 10 + rem; // Reverse build kori ase
        n /= 10;              // Last digit remove kora hoise
    }

    printf("Reversed number: %d\n", rev);
    return 0;
}
// 11. Check Whether a Number is Prime or Not

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime number check: 1 or kom hoile prime nohoi
    if (n <= 1) isPrime = 0;

    // 2 pora sqrt(n) porjonto divide kora jai ne check kore
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = 0; // Divisible hoise mane prime nohoi
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is not a Prime Number\n", n);

    return 0;
}
//12. Find the Sum of Digits of a Number

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Number khon digit wise sum kora hoise
    while(n != 0) {
        digit = n % 10;   // Last digit loi ase
        sum += digit;     // Add korise
        n /= 10;          // Last digit remove
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
// 13. Fibonacci Series up to N Terms
#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    // User pora n terms loi ase
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Fibonacci series print kore: 0 1 1 2 3 5 ...
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2; // Next term calculate
        t1 = t2;            // First term update
        t2 = nextTerm;      // Second term update
    }

    return 0;
}
// 14. Check Whether a Character is a Vowel or Consonant

#include <stdio.h>

int main() {
    char ch;

    // User pora ekhon character loi ase
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space add kora hoise jate input clear thake

    // Vowel naki consonant check kore (lowercase + uppercase)
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);

    return 0;
}
// 15. Convert Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // User pora Celsius temperature loi ase
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
