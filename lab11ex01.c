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

/* include header file */
#include <stdio.h>

struct complex {
    // THIS IS DONE ALREADY! DO NOT CHANGE!
    int real;
    int imgr;
};

void printComplex(struct complex x) {
    // THIS IS DONE ALREADY! DO NOT CHANGE!
    if (x.real == 0 && x.imgr == 0) {
        printf("0\n");
        return;
    }

    if (x.real == 0) {
        printf("%di\n", x.imgr);
        return;
    }

    if (x.imgr == 0) {
        printf("%d\n", x.real);
        return;
    }

    if (x.imgr > 0) {
        printf("%d + %di\n", x.real, x.imgr);
    }
    else {
        printf("%d - %di\n", x.real, (-1) * x.imgr);
    }
    return;
}

/* starting point of this C program */
int main(void) {
    struct complex x, y, x_plus_y, x_times_y;
    // Enter your code here.
    // 1. Read the two complex numbers from user
    scanf(" %d %d", &x.real, &x.imgr);
    scanf(" %d %d", &y.real, &y.imgr);
    // 2. Perfrom complex addition and multiplication
    //    Store your results into x_plus_y and x_times_y
    //    respectively'
    x_plus_y.real = x.real + y.real;
    x_plus_y.imgr = x.imgr + y.imgr;
    x_times_y.real = x.real*y.real - x.imgr*y.imgr;
    x_times_y.imgr = x.imgr*y.real + x.real*y.imgr;

    // Your code ends here
    // Output complex sum and product, 
    // THIS IS DONE ALREADY! DO NOT CHANGE!
    printComplex(x_plus_y);
    printComplex(x_times_y);

    /* last statement of this C program */
    return 0;
}