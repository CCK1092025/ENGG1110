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
 * Student ID   : 11
 * Class/Section: xxx <fill in yourself>
 * Date         : xxx <fill in yourself>
 */

#include <stdio.h>

int main(){
    char C[21];
    scanf("%s", &C);
    C[20] = '\0';
    for(int i=0;i<20;i++){
        if(C[i] >= 'a' && C[i] <= 'z'){
            C[i] = C[i] - 32;
        }
        else if(C[i] >= 'A' && C[i] <= 'Z'){
            C[i] = C[i] + 32;
        }
        else if(C[i] >= '1' && C[i] <= '9'){
            C[i] = 10 - (C[i] - '0') + '0'; 
        }
    }
    printf("%s", C);
    
    
    
    return 0;
}