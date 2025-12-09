/**
 * ENGG1110 Problem Solving by Programming 
 *
 * Lab xxx Exercise xxx <fill in yourself>
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
 * Date         : 18/11/2025
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char line[21];
    
    scanf("%s", line);
    int n = strlen(line);
    char nline[n+1];
    
    for(int i=0;i<n;i++){
        nline[n-i-1] = line[i];
    }
    nline[n] = '\0';

    printf("%s\n", nline);
    for(int j=0;j<n;j++){
        if(nline[j]>='a'&&nline[j]<='z'||nline[j]>='A'&&nline[j]<='Z'){
            printf("%c", nline[j]);
        }
    }
    
    
    return 0;
}