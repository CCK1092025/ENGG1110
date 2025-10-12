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
 * Date         : 15/9/2025
 */

#include <stdio.h>

int main(void) {

  int x, h, m, s, r;
  scanf("%d", &x);
  h = x/3600;
  r = x%3600;
  m = r/60;
  s = r%60;
  
  printf("%d Hours %d Minutes %d Seconds", h, m, s);
  
  return 0;
}