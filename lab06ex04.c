/**
 * ENGG1110 Problem Solving by Programming 
 *
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
 * Date         : 9/10/2025
 */



#include <stdio.h>

int main(void)
{
  int input;
  int factors[] = {2, 3, 5, 7, 11, 13, 17, 19, 23,
  29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
  
  scanf("%d", &input);
  
  int sig=0;
  int n;
  for(n=0;n<27&&factors[n]<input;n++){
    if(input % factors[n] == 0){
       sig++; 
    }
  }
  if(sig>0)
      printf("%d is a composite", input);
  else
      printf("%d is a prime", input);
  
  return 0;
}
