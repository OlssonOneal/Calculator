#include <stdio.h>

int main() {

    char op;
    float first, second, result;
    int ch;

    do {
      printf("Choose operation (+, -, *, /): \n");
      scanf("%s", &op);
      printf("Enter first floating point numbers: \n");
      scanf( "%f", &first);
      printf("Enter second floating point numbers: \n");
      scanf( "%f",&second);
      if(op == '+') {
        printf("Selected Addition\n");
        result = first + second;
        printf("%f + %f = %f\n", first, second, result);
      }
      else if (op == '-') {
        printf("Selected Subtraction\n");
        result = first - second;
        printf("%f - %f = %f\n", first, second, result);
      }
      else if (op == '*') {
        printf("Selected Multiplication\n");
        result = first * second;
        printf("%f * %f = %f\n", first, second, result);
      }
      else if (op == '/') {
        printf("Selected Division\n");
        if (second == 0) {
          printf ("Divisor cannot be zero. Please enter another value for second\n");
          scanf ("%f", &second); 
          result = first / second;
          printf("%f / %f = %f\n", first, second, result);
        }
        else { 
          result = first / second;
          printf("%f / %f = %f\n", first, second, result);
        }
      }
      else {
        printf("ERROR!!! There is no opperation as you have selected... Try again!\n");
      }
      printf("Do you want to continue? (If you want press 1) \n");
      scanf("%d", &ch); 
      }
      while(ch == 1);
      return 0;
}