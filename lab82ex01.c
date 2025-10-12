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
    int arr[4] = {0};
    int i=0;
    while(i<4){
      scanf("%d",&arr[i]);
      i++;}
    
    int j=1;
    int max=arr[0];
    while(j<4){
        if(arr[j]>max){
            max=arr[j];
        }
        j++;
    }
    
    int k=1;
    int min=arr[0];
    while(k<4){
        if(arr[k]<min){
            min=arr[k];
        }
        k++;
    }
    
    printf("The minimum value is %d whereas the maximum value is %d.", min, max);
    return 0;
}    
    