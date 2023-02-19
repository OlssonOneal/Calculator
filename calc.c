#include <stdio.h>

int main() {

    char op;
    float first, second;
    int ch;

    do
    {
    printf("Choose operation (+, -, , /): \n");
    scanf("%s", &op);
    printf("Enter first floating point numbers: \n");
    scanf( "%f", &first);
    printf("Enter second floating point numbers: \n");
    scanf( "%f",&second);

    switch (op) {
        case '+':
            printf("%f + %f = %f\n", first, second, first + second);
            break;
        case '-':
            printf("%f - %f = %f\n", first, second, first - second);
            break;
        case '*':
            printf("%f * %f = %f\n", first, second, first * second);
            break;
        case '/':
            if (second == 0)
                {
                printf ("Divisor cannot be zero. Please enter another value for second\n");
                scanf ("%f", &second);
                printf("%f / %f = %f\n", first, second, first / second);
                break;1
                  
                }
            else
                {
                printf("%f / %f = %f\n", first, second, first / second);
                break;
                }
        default:
            printf("ERROR!!! There is no opperation as you have selected... Try again!\n");
            break;

    }
    printf("Do you want to continue? (If you want press 1) \n");
    scanf("%d", &ch);
    }
    while(ch == 1);
    return 0;
}