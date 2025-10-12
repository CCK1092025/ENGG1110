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
 * Date         : 10/9/2025
 */

#include <stdio.h>

int main(void){
    int n;
    double pi=3.0;
    
    scanf("%d", &n);
        printf("n? ");
    int j;
    for(j=1;j<=n;j++){
        if(n<5){
            printf("%f\n", pi);
            }
        else
        {   if(j==3){
            printf("...\n"); 
            } 
            else if(j==1||j==2||j==n-1||j==n){
            printf("%f\n", pi);
            }
        }
        if(j%2==0){
          pi-=(double)4.0/((2*j)*(2*j+1)*(2*j+2));
        }
        else{
          pi+=(double)4.0/((2*j)*(2*j+1)*(2*j+2));
        }
        
    }  
    return 0;
}


