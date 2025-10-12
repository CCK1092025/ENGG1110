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
 * Class/Section: C
 * Date         : 10/9/2025
 */

#include <stdio.h>

int main(void) {
  // define integer x
  int x;
  // obtain integer x from user
  scanf("%d", &x);
  // define integer factorial = 1
  int fac = 1;
  // for-loop i from 1 to x
  int i;
  for(i=1;i<=x;i++)
     // factorial = factorial * i
     fac = fac*i;
  // end of loop
     
  // print factorial
    printf("%d", fac);
}