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

void getAreaVolume(int side, int *pArea, int *pVolume) {
  // calculate and update the cube's surface area and volume via the passed pointers
  *pArea = side*side*6;
  *pVolume = side*side*side;
}

int main(void) {
  // DO NOT TOUCH THIS!
  
  int side, area, volume;
  
  printf("Side of cube (cm)? ");
  scanf("%d", &side);
  getAreaVolume(side, &area, &volume);
  printf("Surface Area: %d cm^2\n", area);
  printf("Volume: %d cm^3\n", volume);
  return 0;
}