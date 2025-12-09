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
 * Student Name : Chan CHeuk Kin
 * Student ID   : 1255257970
 * Class/Section: ENGG1110B
 * Date         : 23/10/2025
 */

#include <stdio.h>
#include <math.h>

// create your function PrintCircle here!
void PrintCircle(int radius){
    int i, j;
    double centerX, centerY;
    centerX = centerY = radius;
    for(i=0;i<radius*2;i++){
        for(j=0;j<2*radius;j++){
            double posX = i +0.5;
            double posY = j +0.5;
            double distance = sqrt(pow(posX-centerX,2) + pow(posY-centerY,2));
            if(distance>radius){
                printf("-");
            }
            else{
                printf("@");
            }
        }
        printf("\n");
    }
}

int main(void) {
  // DO NOT CHANGE THE MAIN FUNCTION

  int radius;    // DON'T TOUCH THIS!
  
  printf("Radius? ");    // DON'T TOUCH THIS!
  scanf("%d", &radius);    // DON'T TOUCH THIS!
  PrintCircle(radius);     // DON'T TOUCH THIS!
  return 0;     // DON'T TOUCH THIS!
} 