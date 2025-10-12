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

/* include header file */
#include <stdio.h>


int main()
{
    int phone;
	printf("Input phone number: ");
	scanf("%d", &phone);
	
	if(phone<20000000 || phone>99999999){
	  printf("Invalid phone number\n");
	  return 1;
	}
	  
	
	int occurrences[10] = {0};
	int digit=phone;
	while(digit>0){
	    int d = digit%10;
	    occurrences[d] = 1;
	    digit /= 10;}
	
	
	int out=0;
	int k = 0;
	while(k<10){
	    if(occurrences[k]>0){
	        out++;
	    }
	    k++;
	}
	
	if(out>0){
	printf("There are %d unique digit(s).",out );}
    return 0;
}