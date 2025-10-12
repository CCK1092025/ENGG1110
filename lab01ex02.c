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
 * Date         : 
 */

#include <stdio.h>

int main(void) {
    double radius;
    double pi = 3.14;
    
    printf("Input the radius=");
    scanf("%lf", &radius);
    printf("Perimeter: %.2f\n", 2 * pi * radius);
    printf("Area: %.2f\n", pi * radius * radius);
    return 0;

}