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
 * Date         : 18/9/2025
 */
#include <stdio.h>

int main()
{
  double wind_speed;
  int signal;
  
  scanf("%lf", &wind_speed);
  
  if(wind_speed < 41.5)
    signal = 1;
    
    else if(wind_speed < 62.5)
    signal = 3;
    
    else if(wind_speed < 117.5)
    signal = 8;
    
    else if(wind_speed >= 117.5)
    signal = 10;
    

  
    printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning Signal No %d", wind_speed, signal);
 
  return 0;

}