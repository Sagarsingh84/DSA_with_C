#include <stdio.h>

int main() {
    
    int a,b;
    int choice;
    printf("\n1.Additon\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("Enter choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter 1st value :");
            scanf("%d",&a);
            printf("Enter 2nd value :");
            scanf("%d",&b);
            printf("Addition: %d",a+b);
        break;
        case 2:
            printf("Enter 1st value :");
            scanf("%d",&a);
            printf("Enter 2nd value :");
            scanf("%d",&b);
            printf("Subtraction: %d",a-b);
        break;
        case 3:
            printf("Enter 1st value :");
            scanf("%d",&a);
            printf("Enter 2nd value :");
            scanf("%d",&b);
            printf("Multiplication: %d",a*b);
        break;
        case 4:
            printf("Enter 1st value :");
            scanf("%d",&a);
            printf("Enter 2nd value :");
            scanf("%d",&b);
            printf("Division: %d",a/b);
        break;
        
        default:
            printf("Invalid Choice");
    }
    return 0;
}
