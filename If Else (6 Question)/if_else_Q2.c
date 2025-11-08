// Q-2) Find The Largest And Smallest Value Among 3 Numbers
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);

    int largest = a;
    int smallest = a;

    
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("%d is Largest\n", largest);
    printf("%d is Smallest\n", smallest);

    return 0;
}
