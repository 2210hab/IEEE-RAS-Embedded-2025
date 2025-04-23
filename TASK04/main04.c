#include <stdio.h>
#include <stdlib.h>
//problem4
void printEven(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] - '0') % 2 == 0) {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
}
//problem 4
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int main()
{
    //=========[problem1]=========================================
    // value of varaible :-
  /*  int var1 = 30;
    char var2 = 'D';
    float var3 = 50.2;
    long var4 = 12345667;

    // create pointer :-
    int *VAR1 = &var1;
    char *VAR2 = &var2 ;
    float *VAR3= &var3 ;
    long *VAR4= &var4;

    //PRINT VALUE AND ADDERSS MEMORY BY POINTER
    printf("Value of var1: %d, Address of var1: %p\n", *VAR1, VAR1);
    printf("Value of var2: %c, Address of var2: %p\n", *VAR2, VAR2);
    printf("Value of var3: %.2f, Address of var3: %p\n", *VAR3, VAR3);
    printf("Value of var4: %ld, Address of var4: %p\n", *VAR4, VAR4);
    */
    // =======[PROBLEM 2]======================================
    /*
    int num1 , num2 = 0;
    int *NUM1 = &num1;
     int *NUM2 = &num2;
    printf("input the first number : \n");
    scanf("%d" , NUM1);
    printf("input the SECOND number : \n");
    scanf("%d" , NUM2);
    printf("Sum = %d \n" , *NUM1 + *NUM2);
    printf("Difference = %d \n" , *NUM1 - *NUM2);
    printf("Product = %d \n" , *NUM1 * *NUM2);
    printf("Quotient = %d \n" , *NUM2 % *NUM1);
    */

    //============[PROBLEM3]=================================================
    /*
     int a, b, temp;
    int *p1 = &a;
    int *p2 = &b;

    printf("Enter value of a: ");
    scanf("%d", p1);
    printf("Enter value of b: ");
    scanf("%d", p2);
 // VALUES BEFORE SWAP
    printf("\nBefore swapping:\n");
    printf("a: %d\n", *p1);
    printf("b: %d\n", *p2);


    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    //value after swaping
    printf("\nAfter swapping:\n");
    printf("a: %d\n", *p1);
    printf("b: %d\n", *p2);

    return 0;
    */
    //==================[problem4]=================================================
/*
    char str[] = "012345678";
    printEven(str);
    return 0;
    */
    //================[problem5]===================================================
    /*
     char str[] = "Embedded Systems";
    int len = stringLength(str);
    printf("Length = %d\n", len);
    return 0;
    */
    //=========problem 6============================================================
    /*
    int a = 7;
    int *aptr = &a; // set aptr to address of a
    printf("Address of a is %p\n Value of aptr is %p \n\n" , &a , aptr);
    printf("Value of a is %d\nValue of *aptr is ^%d\n\n" , a , *aptr);
    printf("Showing that * and & are complement of each other \n");
    printf("&*aptr = %p\n*&aptr = %p\n0" , &*aptr , *&aptr);
    */
}



