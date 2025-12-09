
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
 * Date         : 20/10/2025
 */
#include <stdio.h>

int main()
{   
    int N, K;
    scanf("%d %d", &N, &K);
    
    int num[100];
    int i, j;
    for(i=0;i<N;i++){
        scanf("%d", &num[i]);
    }
    
    double avg;
    int sum;
    
    for(i=0;i<=N-K;i++){
        sum = 0;
        for(j=0;j<K;j++){
            sum += num[i+j];
        }
        
        avg = (double)sum / K;
        printf("%.2f", avg);
        if (i != N - K) {
            printf(" ");
        }

    }
    
    return 0;
}