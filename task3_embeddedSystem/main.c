#include <stdio.h>
#include <stdlib.h>

int main()
{
    //======problem 4 ======//
      int size = 0;

    printf("enter size of array : ");
    scanf("%d" , &size);
    int matrix1[size][size];
    int matrix2[size][size];
   // input first matrix

   printf("enter first matrix : \n");
      for(int i = 0 ; i < size ; i++){
        for(int j = 0; j < size ; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    // input second matrix

    printf("enter second matrix : \n");
           for(int i = 0 ; i < size; i++){
        for(int j = 0; j < size ; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    int addation_matrix [size][size];

         for(int i = 0 ; i < size ; i++){
        for(int j = 0; j < size ; j++){
            addation_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf(" addation of two matrix is : \n" );
      for(int i = 0 ; i < size ; i++){
        for(int j = 0; j < size ; j++){
             printf("%d " , addation_matrix[i][j]);

        }
        printf("\n");
      }



    return 0;
}
//==================problem1(searching)======================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315818936

//=============================promblem2[lowest Number]======================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315823069

//=========================problem3[sorting]===================================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316110098

//==========================problem5===========================================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315837355

//===========================promblem6[Mirror Array]===========================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315838871

//===========================promblem7[Max Subsequence]=============================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316097877

//=====================================problem8===========================================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316098479

//============================lucky array _ Bouns==============================//
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316089540
