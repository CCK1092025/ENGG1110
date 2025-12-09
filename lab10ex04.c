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
 * Date         : 13/11/2025
 */
 
 #include <stdio.h>
 
 int main(){
     
    FILE *ptr = fopen("chars.txt", "r");
     
    int N;
    printf("N? ");
    scanf("%d", &N);
     
    char A[100], B[100];
    int numbers[100];

    for(int i=0; i<N; i++){
    
        fscanf(ptr, " %c %c", &A[i], &B[i]);
        numbers[i] = B[i] - A[i];
        
        
        if (numbers[i] < 0) {
            numbers[i] = -numbers[i];
            for(int j=0; j<=numbers[i]; j++){
            printf("%c", A[i]-j);
        }
        }
        else{
            for(int j=0; j<=numbers[i]; j++){
            printf("%c", A[i]+j);
            }
        }
        printf("\n");
    }
    
    fclose(ptr);
    return 0;
 }