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
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Chan Cheuk Kin
 * Student ID   : 1155257970
 * Class/Section: ENGG1110B
 * Date         : 31/10/2025
 */

#include<stdio.h>
#include<stdlib.h>

int main(void){
  // Enter your code here to
  // 1. scan array elements, and
  // 2. print the row and column sum.
  int x, y;
  scanf("%d %d", &x, &y);
  
  int i, j;
  int A[x][y];
  for(i=0;i<x;i++){
      for(j=0;j<y;j++){
          scanf("%d", &A[i][j]);
      }
  }
  
  int rowsums[x], columnsums[y];
  
for (i = 0; i < x; i++) rowsums[i] = 0;
for (j = 0; j < y; j++) columnsums[j] = 0;

  printf("Row sums:\n");
  for(i=0;i<x;i++){
      for(j=0;j<y;j++){
          rowsums[i] += A[i][j];
        }
        printf("%d\n", rowsums[i]);
  }
  printf("Column sums:\n");
  for(j=0;j<y;j++){
      for(i=0;i<x;i++){
          columnsums[j] += A[i][j];
        }
        printf("%d ", columnsums[j]);
  }
  

   return 0;
}
