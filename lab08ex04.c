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
 * Class/Section: ENGG1100B
 * Date         : 23/10/2025
 */
 
#include <stdio.h>
#include <math.h>
int count(int x){
    int count = 0;
    while(x>0){
        if(x%2==1){
            count++;
    }
    x/=2;
    }
    return count;
}


int main(void)
{   
    int i;
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for(i=b;i>=a;i--){
        if(count(i)%2==0){
            printf("%d", i);
            printf("\n");
        }
    }
    return 0;
}