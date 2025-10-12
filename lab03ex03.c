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
 * Date         : 18/9/2025
 */
#include <stdio.h>

int main()
{

 int adults, children;
 double cost, tips, per_adult, per_child;
 printf("Input number of adults: ");
 scanf("%d", &adults);
 printf("Input number of children: ");
 scanf("%d", &children);
 
 printf("Input cost of meal: ");
 scanf("%lf", &cost);
 printf("Input tips: ");
 scanf("%lf", &tips);
 
 per_adult = (cost + tips) / ( adults + 0.5 * children ) ;
 per_child = per_adult / 2;
 
 printf("Each adult pays: %.2f\n", per_adult);
 printf("Each child pays: %.2f\n", per_child);
 return 0;

}