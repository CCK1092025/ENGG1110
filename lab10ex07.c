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
 * Date         : 14/11/2025
 */
 
#include <stdio.h>

int main(void) {
  char inputArray[20] = {0};
  printf("User input: ");
  fgets(inputArray, 20, stdin);
  for(int i=0;i<19;i++){
      printf("%d ", inputArray[i]);
  }
  printf("%d", inputArray[19]);
  printf("\n%s", inputArray);
  
  

  return 0;
}