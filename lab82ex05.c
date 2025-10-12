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

#include <stdio.h>

int main(void){
    int X, Y, Z;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    
    int marks=0;
    
    if( X%10==2||X%10==7 ){
       printf("A");
       marks++;
    }
    if( X+Y==Z || X+Z==Y || Y+Z==X ){
       printf("B");
       marks++;
    }
    if( X>=Y || Y%3!=0 ){
       printf("C");
       marks++;
    }
    if( marks==3){
        printf("D");
    }
    
    
    return 0;
}