#include <stdio.h>
void sum() {    

    int number1, number2, sum;
    
    printf("Enter two integers to add: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d \n", number1, number2, sum);
   // return 0;
}

