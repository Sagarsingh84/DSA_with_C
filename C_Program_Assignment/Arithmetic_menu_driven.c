#include<stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two number: ");
    scanf("%f %f",&a, &b);

    printf("\nMenu");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Addition = %.2f", a + b);
        break;

        case 2:
        printf("Subtraction = %.2f", a - b);
        break;

        case 3:
        printf("Multiplication = %.2f", a * b);
        break;

        case 4:
        if (b != 0 )
        printf("Division = %.2f", a / b);
        else
        printf("Division by zero is not possible. ");
        break;

        default:
        printf("Inavalid choice");
    }
    return 0;
}
