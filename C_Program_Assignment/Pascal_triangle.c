#include <stdio.h>

int main() {
    int n ;
    int i, j;
    int value;
    printf("Enter value of n :");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {

        // print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        value = 1;

        // Print pascal triangle values
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
