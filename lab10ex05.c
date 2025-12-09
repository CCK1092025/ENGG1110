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
     
    FILE *ptr = fopen("numberlist.txt", "r");
     
    double sum_of_square = 0;
    int sum = 0;
    int N = 0;
    
    int i, j, A[100];
    scanf("%d %d", &i, &j);
    
    
    for(int x=0; x<j; x++){
        fscanf(ptr,"%d",&A[x]);
        if(x>=i-1){
        sum += A[x];
        sum_of_square += A[x]*A[x];
        N++;
        }
    }
    
    double variance = (sum_of_square / N) - ((double)sum / N)*((double)sum / N);
    
    printf("%.4f", variance);
    
    
    
    fclose(ptr);
    return 0;
 }