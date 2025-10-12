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
 * Class/Section: ENGG1110
 * Date         : 22/9/2025
 */

/* include header file */
#include <stdio.h>
#include <ctype.h>

/* starting point of this C program */
int main(void) {

  // 1. Obtain input character
  char x = getchar();
  printf("You have entered '%c'.\n", x);
  // 2. Check input is a number or not, and output correspondingly
  if(isdigit(x))
    printf("'%c' is a number.", x);
  // 3.Check input is a small letter or not, and output correspondingly
  else if(islower(x))
    printf("'%c' is a small letter.", x);
  // 4.Check input is a capital letter or not, and output correspondingly
  else if(isupper(x))
    printf("'%c' is a capital letter.", x);
  // 5. Output the remaining situation, i.e. not an alphanumeric letter
  else
    printf("'%c' is not an alphanumeric letter.", x);
  /* last statement of this C program */
  return 0;
}