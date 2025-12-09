/**
 * ENGG1110 Problem Solving by Programming
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 * http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Chan Cheuk Kin
 * Student ID   : 1155257970
 * Class/Section: ENGG1110
 * Date         : 31/10/2025
 */

#include <stdio.h>

int checkSymmetricMatrix( int matrix[16][16],  int size ){
  int isSymmetric = 1; // assume iSymmetric is True first
  // check whether the matrix is symmetric
  // return 1 if it is symmetric; otherwise return 0
  int i, j;
  for(i=0;i<size;i++){
      for(j=0;j<size;j++){
          if(!(matrix[i][j] == matrix[j][i])){
              isSymmetric = 0;
          }
      }
  }
  return isSymmetric;
}

int main(void){
  int n;
  int matrixRead[16][16];
  // read matrix size and elements from user input via nested for loop
  scanf("%d", &n);
  int i, j;
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%d", &matrixRead[i][j]);
      }
  }
  // call function - checkSymmetricMatrix
  checkSymmetricMatrix( matrixRead, n);
  // print your checking result16
  if(checkSymmetricMatrix( matrixRead, n) == 1){
      printf("It is a symmetric matrix!");
  }
  else{
      printf("It is not a symmetric matrix!");
  }
  return 0;
}