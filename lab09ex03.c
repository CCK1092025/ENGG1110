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
 * http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Chan Cheuk Kin
 * Student ID   : 1155257970
 * Class/Section: ENGG1110
 * Date         : 31/10/2025
 */

#include <stdio.h>

// This function finds and returns total number of minutes in a duration represented by array Dur.
int toMinutes(int Dur[3]) 
{
   return Dur[0]*60*24 + Dur[1]*60 + Dur[2];
}


// This function sets elements in array Dur to represent a duration that is equal to M minutes.
void setDuration(int Dur[3], int M) 
{
   Dur[0] = M/60/24;
   Dur[1] = M/60 - Dur[0]*24;
   Dur[2] = M%60;
}


// This function prints a duration represented by array Dur in the following format:
/***** C O M M E N T ******
D days H hours M minutes
******* F O R M A T ******/
void printDuration(int Dur[3]) 
{
    printf("%d days %d hours %d minutes", Dur[0], Dur[1], Dur[2]);
}


/* DO NOT modify the given main() function */
int main(void)
{
    int A[3], B[3], minutes, diff;

    scanf("%d", &minutes);
    setDuration(A, minutes);

    scanf("%d", &minutes);
    setDuration(B, minutes); 

    printf("Duration #1: ");
    printDuration(A);
    printf("\n");

    printf("Duration #2: ");
    printDuration(B);
    printf("\n");

    // Compute the absolute difference between the durations
    diff = toMinutes(A) - toMinutes(B);
    if (diff < 0)
        diff = -diff;

    printf("The two durations are %d minutes apart.\n", diff);

    return 0;
}