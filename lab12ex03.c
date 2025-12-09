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
 * Date         : 26/11/2025
 */

#include <stdio.h>
int f(int n){
    
    
    if(n == 0 || n == 1){
        return 1;
    }
    
    return n*f(n-1);
}

int nCk(int n, int k)
{
    return f(n) / (f(n - k) * f(k));

}

int main()
{  
    int n,k;
    scanf("%d%d", &n, &k);
    printf("%d", nCk(n,k));
}