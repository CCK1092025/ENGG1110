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
 * Class/Section: ENGG1110
 * Date         : 28/20/2025
 */

#include <stdio.h>

// DO NOT CHANGE THE FUNCTION PARAMETER LIST
void SelectionSort(int input[], int size) {
   // Insert your code here
   int i, j;
   for(i=0;i<size-1;i++){
       int minpos = i;
       for(j=i+1;j<size;j++){
           if(input[j]<input[minpos]){
               minpos = j;
           }
       }
       if(minpos != i){
           int tmp;
           tmp = input[i];
           input[i] = input[minpos];
           input[minpos] =  tmp;
       }
   }
}

int main(void) {

  // DO NOT CHANGE THE MAIN FUNCTION!
  int a[8] = {0};

  scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
  SelectionSort(a, 8);
  printf("%d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
  return 0;
}