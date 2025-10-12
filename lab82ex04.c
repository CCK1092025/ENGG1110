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
 * Date         : 12/10/2025
 */

/* include header file */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int A, B, C;
    printf("Input A, B and C: ");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    int D;
    D =  B*B - 4*A*C;
    printf("D = %d\n", D);
    
    double x, y;
    x = (float)(-B+sqrt(D))/(2*A);
    y = (float)(-B-sqrt(D))/(2*A);
    
    if(D < 0){
        printf("No real roots");
    }
    else{
        if(D != 0){
            printf("The two roots are %.2f and %.2f", x, y);
        }
        else{
            printf("The double root is %.2f\n", x);
        }
    }
    
    return 0;
}