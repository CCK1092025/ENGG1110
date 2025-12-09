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
 * Class/Section: ENGG1100B
 * Date         : 23/10/2025
 */
  
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int b) {
	// convert binary number to decimal number
    int decimal = 0, base = 1;
    while(b>0){
        int lastdigit = b % 10;
        decimal += lastdigit * base;
        base *= 2;
        b /= 10;
    }
    return decimal;
}

int decimalToBinary(int d) {
	// convert decimal number to binary number
    int binary = 0,  base = 1;
    while(d>0){
        int lastdigit = d % 2;
        binary += lastdigit * base;
        base *= 10;
        d /= 2;
    }
    return binary;
}

int main(void) {
  int b1, b2, d1, d2, diff_b, diff_d;
  // Read b1 and b2 from user, and start calculation
  printf("b1 and b2? ");
  scanf("%d %d", &b1, &b2);
  
  // Do NOT modify the following lines
  // NEVER EVER TOUCH THESE!
  d1 = binaryToDecimal(b1);
  d2 = binaryToDecimal(b2);
  printf("The numbers (in decimal) are %d and %d\n", d1, d2);
  diff_d = d1 - d2;
  diff_b = decimalToBinary(diff_d);
  printf("The difference is %d (decimal) or %d (binary)\n", diff_d, diff_b);
  return 0;
}