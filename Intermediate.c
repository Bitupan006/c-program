// 16. Find the GCD and LCM of Two Numbers

#include <stdio.h>

int main() {
    int a, b, i, gcd, lcm;

    // User pora dui ta number loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // GCD: juntu dui number e divide kore, boro divisor
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    // LCM: formula => (a * b) / gcd
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
// 17. Count Number of Digits in an Integer

#include <stdio.h>

int main() {
    int n, count = 0;

    // User pora number loi ase
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Digit count kora: number khon 10 e divide kori
    do {
        n /= 10;
        count++;
    } while(n != 0);

    printf("Total digits = %d\n", count);
    return 0;
}
// 18. Print All Prime Numbers Between 1 and 100

#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for(i = 2; i <= 100; i++) {
        isPrime = 1; // Dhori lisu prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            printf("%d ", i);
    }

    return 0;
}
// 19. Find Largest Element in an Array

#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n]; // Array declare

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest element = %d\n", max);
    return 0;
}
// 20. Sort Array in Ascending Order

#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort ascending
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// 21. Matrix Addition

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of 1st matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    // Matrix addition
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
// 22. Matrix Multiplication

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    printf("Enter elements of 1st matrix:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d", &b[i][j]);

    // Initialize mul matrix to 0
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
            mul[i][j] = 0;

    // Matrix multiplication
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
            for(k=0; k<c1; k++)
                mul[i][j] += a[i][k] * b[k][j];

    printf("Resultant Matrix:\n");
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}
// 23. Transpose of a Matrix

#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Transpose logic
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
// 24. Insert an Element in Array

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0-based): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// 25. Delete an Element from Array

#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based): ");
    scanf("%d", &pos);

    for(i = pos; i < n-1; i++)
        arr[i] = arr[i+1];

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// 26. Linear Search in Array

#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    // Array size loi ase
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array elements loi ase
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Search element loi ase
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Linear search kore array element logot
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}
// 27. Copy One String to Another

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    // First string loi ase
    printf("Enter a string: ");
    scanf("%s", str1); // %s e whitespace pora thakile thik kaam kore

    // String copy manually
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0'; // Null character set kora lagibo

    printf("Copied string: %s\n", str2);
    return 0;
}
// 28. Find Length of a String Without Using Library Function

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // String loi ase
    printf("Enter a string: ");
    scanf("%s", str);

    // Length count kore manually
    while(str[i] != '\0') {
        i++;
    }

    printf("Length of string: %d\n", i);
    return 0;
}
// 29. Check Whether a String is a Palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // String loi ase
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str); // String length find koribo

    // First last element check kori
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}
// 30. Count Vowels, Consonants, Digits, and White Spaces in a String

#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // New line pora full line input loi ase
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Character check kori classification kore
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Letter hoile vowel naki consonant check
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if(ch == ' ') {
            spaces++;
        }
    }

    // Result display kore
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}
