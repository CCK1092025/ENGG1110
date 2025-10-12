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
*http://www.cuhk.edu.hk/policy/academichonesty/
*
* Student Name : Chan Cheuk Kin
* Student ID   : 1155257970
* Class/Section: ENGG1110C
* Date         : 25/9/2025
*/
/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void)
{

  // Do not change the array f, the lookup table for Fibonacci number
  
  int f[21] = {0,   1,   1,   2,   3,
               5,   8,   13,  21,  34,
               55,  89,  144, 233, 377,
               610, 987, 1597,2584,4181,
               6765};
  
  int x;
  // Enter your code here to
  
  // 1. Obtain input number
  scanf("%d", &x);
  
  
  // 2. Output the fibonacci number accordingly
  
  printf("%d\n", f[x]);
  
  return 0;

}