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
* Date         : 14/9/2025
*/
   
#include <stdio.h>

int main(void) {
    
  // declare the variables
  int x, msd, lsd;
  // print "Input a 3 digit number: "
  printf("Input a 3 digit number: ");
  // obtain integer "input" from user
  scanf("%d", &x);
  // MSD = input / 100 (e.g. 450 / 100 is 4)
  msd = x/100;
  // LSD = input % 10  (e.g. remainder of 450 / 10 is 0)
  lsd = x%10;
  // print MSD and LSD
  printf("MSD: %d\n", msd);
  printf("LSD: %d", lsd);
  
  return 0;
}  
  
  