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
 * Class/Section: ENGGC
 * Date         : 2/10/2025
 */

/* include header file */
#include <stdio.h>

/* include header file */
#include <stdio.h>

int main(void) {
  int n;
  printf("Input n: ");
  scanf("%d", &n);
  
  double v[n] , w[n] ;

  int i=0, j=0, k=0;
  printf("Enter vector v: ");
  while(j<n){
     scanf("%lf", &v[j]);
     j++;
  }
  
  printf("Enter vector w: ");
  while(k<n){
     scanf("%lf", &w[k]);
     k++;
  }
  
  double dot = 0;
  while(i<n){
    dot = dot + v[i]*w[i];
    i++;
  }
  
  printf("Dot product v.w = %.2f", dot);
    
  return 0;
}