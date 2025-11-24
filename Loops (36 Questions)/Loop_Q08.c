#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers is: %d\n", sum);

    return 0;
}