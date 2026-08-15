#include <stdio.h>

int main() {
    int n ;
    int i, j,k;
    printf("Enter value of n :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        for (j = n; j >i; j--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
