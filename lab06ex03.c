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
 * Date         : 9/10/2025
 */
#include <stdio.h>


int main()
{
    float arr[4]={0};
    float product;
    int x, i;
    for(i=0;i<4;i++){
        scanf("%f", &arr[i]);
    }
    for(x=-6;x<5;x++){
        product = arr[0]*x*x*x + arr[1]*x*x + arr[2]*x +arr[3];
        printf("f(%d) = %.2f\n", x, product);}
    
    
    return 0;
}