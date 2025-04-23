#include <stdio.h>
#include <stdlib.h>

void getODD(int size , int arr[]){
  int *ptr = arr;
    int counter = 0;
    printf("Odd elements are: ");
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) % 2 != 0) {
            printf("%d ", *(ptr + i));
            counter++;
        }
    }
    printf("\nNumber of odd elements: %d\n", counter);
}
int main()
{
    //===========problem1 ================================================
    /*
    char str1[50] ;
    char str2[50] ;
    char *ptr1 = str1;
    char *ptr2 = str2;

    printf("Enter the first string := \n");
   fgets(ptr1, 50, stdin);
    printf("Enter the second string := \n");
    fgets(ptr2, 50, stdin);

    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 != *ptr2) {
            printf("Strings are not equal.\n");
            return 0;
        }
        ptr1++;
        ptr2++;
    }

    if (*ptr1 != *ptr2) {
        printf("Strings are not equal.\n");
        return 0;
    }
    else
       printf("Strings are equal.\n");
    return 0;
    */
//================problem2================================================
/*
char str[100];
char *ptr = str;
printf("Enter the string : \n");
fgets(ptr, 100, stdin);
char str2[100] ;
char *ptr2 = ptr;
printf("Original String: %s\n" ,str);
printf("Copied String : %s\n" , ptr2);
*/

//===============problem3==================================================
  /*
   int size;
    printf("Enter size of array : \n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array : \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Array in ascending order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
     for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) < *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Array in descending order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
    */

    //===============problem 4=============================================
    /*
    int SIZE = 3;
      int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], product[SIZE][SIZE];
    int *ptr1, *ptr2, *ptr_product;


    printf("Enter elements for the first matrix: \n");
    ptr1 = &matrix1[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", (ptr1 + i * SIZE + j));
        }
    }

    printf("Enter elements for the second matrix: \n");
    ptr2 = &matrix2[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", (ptr2 + i * SIZE + j));
        }
    }


    ptr_product = &product[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *(ptr_product + i * SIZE + j) = 0;
            for (int k = 0; k < SIZE; k++) {
                *(ptr_product + i * SIZE + j) += *(ptr1 + i * SIZE + k) * *(ptr2 + k * SIZE + j);
            }
        }
    }

    printf("Product of matrices is:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", *(ptr_product + i * SIZE + j));
        }
        printf("\n");
    }
    */
//==================problem5=====================================================
/*
  int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    int *ptr1 = array;

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr1 + i);  // بدون نجمة
    }

    getODD(size, array);  // مناداة مباشرة للدالة
    return 0;
    */
//=============problem6 ==========================================================

    int op;
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int result = 0;

    printf("Enter your choice:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);
    printf("\n");

    switch(op) {
        case 1:
            result = *ptr1 + *ptr2;
            break;
        case 2:
            result = *ptr1 - *ptr2;
            break;
        case 3:
            result = *ptr1 * *ptr2;
            break;
        case 4:
            if (*ptr2 != 0)
                result = *ptr1 / *ptr2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}











