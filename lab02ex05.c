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
    
  
  int h, w, t;
  double ans;
  
  // Step 1: ask user for h, w and t
  scanf("%d %d %d",&h, &w, &t);
  // Step 2: ?
  // Go on with your own steps!
  ans  = (double) (h * w) / t;
   printf("Number of lab hours per week: Number of weeks this semester: Number of tutors: Average working hours = (%d * %d) / %d = %.3f", h, w, t, ans);
  
  
  return 0;
}