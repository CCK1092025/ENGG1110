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
 * Date         : 22/10/2025
 */

#include <stdio.h>
double radius;

double CircleArea(double radius) {
  return 3.1416 * radius * radius;
}

double Circumference(double diameter) {
   return 3.1416 * diameter;
}

int main(void) {
  // DO NOT TOUCH THIS!
  
  double radius;
  
  printf("Radius of circle? ");
  scanf("%lf", &radius);
  printf("Area: %.4f\n", CircleArea(radius));
  printf("Circumference: %.4f\n", Circumference(radius*2));
  return 0;
}