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
 * Class/Section: ENGG1110B
 * Date         : 29/0/2025
 */

#include <stdio.h>

int main(void) {
  // define integer x = 0
    int x = 0;
  // define char c
    char c = 0;
  // while x < 26
    while(x<26){
     // c = 'A' + x
     c = 'A' + x;
     // print "letter <x+1> is <c>"  
     printf("letter %d is %c\n", x+1 , c);
     // x = x + 1
     x = x + 1;
  // end of loop
    }
}