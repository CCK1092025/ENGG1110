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
 * Date         : 14/11/2025
 */
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 21  // 最多 20 字元 + '\0'

int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char input[MAX_LEN];

    while (1) {
        scanf(" %20s", input); // 讀取字串

        // 檢查是否輸入 quit
        if (strcasecmp(input, "quit") == 0) {
            printf("Bye\n");
            break;
        }

        // 檢查是否回文
        if (isPalindrome(input)) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }

    return 0;
}
