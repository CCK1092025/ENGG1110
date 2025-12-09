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
 * Date         : 18/10/2025
 */
#include <stdio.h>

int main()
{   
    int a, b;
    int i, j;
    printf("Input a and b: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    int isPrime[10001];
    for (i = 0; i <= 10000; i++) {
           isPrime[i] = 1;
        }

    isPrime[0] = 0; 
    isPrime[1] = 0; 

    for (i = 2; i * i <= 10000; i++) {
        if (isPrime[i]) {
            for (j = i * i; j <= 10000; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    for(i=b;i>=a;i--){
        if(isPrime[i]==1){
        printf("%d ",i);
        }
    }
    
    
    return 0;
}