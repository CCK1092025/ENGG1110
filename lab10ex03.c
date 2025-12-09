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
 * Date         : 11/11/2025
 */
 
 #include <stdio.h>
 
 int main(){
    int start, end;
    
    printf("Start? ");
    scanf("%d", &start);
    printf("End? ");
    scanf("%d", &end);
    
    FILE *ptr;
    ptr = fopen("numbers.txt", "r");
    
    int i, j, x, y;
    for(i=1;i<=300;i++){
        fscanf(ptr,"%d %d",&x,&y);
        if( i >= start && i <= end){
            for(j=0;j<x;j++){
                printf("%d ", y);
            }
            printf("\n");
        }
    }
    return 0;
 }