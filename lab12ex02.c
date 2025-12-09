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
 * Date         : 26/11/2025
 */

#include <stdio.h>

int  f(int n){
  int x;
  
  if(n==0){
      return 0;
  }
  
  
  if(n==1){
      return 1;
  }
  return f(n-1)+f(n-2);
}

int main(void) {
  
  int n;
   scanf("%d", &n);
  printf("%d" ,f(n));
  
  return 0;
}