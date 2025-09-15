#include<stdio.h>
int main() {
    int n[200], i;

    for (i = 0; i < 200; i++) {
        printf("Enter %d Value: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("Negative Value : ");
    for (i = 0; i < 200; i++) {
        if (n[i] < 0) {
            printf("%d ", n[i]);   
        }
    }
    printf("\n");

    printf("Zero           : ");
    for (i = 0; i < 200; i++) {
        if (n[i] == 0) {
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("Positive Value : ");
    for (i = 0; i < 200; i++) {
        if (n[i] > 0) {
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    return 0;
}
