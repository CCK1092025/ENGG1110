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
 * Date         : 27/11/2025
 *
 * I have used AI tools in this work : YES
 * Details of AI tools usage:
 * Q.1 What is the URL of the AI tool?
 *
 * Q.2 What is the model name and version of the AI tool?
 *
 * Q.3 Here is my prompt (in point form or in a paragraph):
 *
 * Q.4 Did it work as expected? Give details.
 *
 * Q.5 Did you have any follow-up prompts/actions? If yes, give details.
 *
 * Q.6 What do you think of this usage experience?
 *
 */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

//// DO NOT MODIFY!
void checkBrackets(char[], int pos, int depth, int *maxDepth, int *isBalanced);

//// DO NOT MODIFY!
int main(void) {
    char formula[50];
    int isBalanced = 1;  // Assume balanced, until checked otherwise
    int maxDepth = 0;

    printf("Enter a formula: ");
    scanf("%s", formula);

    checkBrackets(formula, 0, 0, &maxDepth, &isBalanced);

    if (isBalanced)
        printf("Brackets are balanced with maximum depth of %d.\n", maxDepth);
    else
        printf("Brackets are not balanced.\n");

    return 0;
}




void checkBrackets(char f[], int pos, int depth, int *maxDepth, int *isBalanced) {
    // Static storage across recursive calls for deduping printed function names.
    // This persists for the duration of the program run.
    static char printedNames[64][32];  // up to 64 unique function names, each up to 31 chars
    static int printedCount = 0;

    // Early exit if already known unbalanced
    if (!*isBalanced) return;

    char ch = f[pos];

    // Base case: end of string
    if (ch == '\0') {
        if (depth != 0) *isBalanced = 0;  // unmatched '(' left
        return;
    }

    if (ch == '(') {
        // Try to capture the function name immediately before '('
        int i = pos - 1;

        // Skip spaces (robust even if input contains spaces)
        while (i >= 0 && isspace((unsigned char)f[i])) i--;

        // Collect identifier backwards: [A-Za-z_][A-Za-z0-9_]*
        int end = i;  // last character of the name
        while (i >= 0 && (isalnum((unsigned char)f[i]) || f[i] == '_')) i--;

        int start = i + 1; // first character of the name

        // Validate it starts with letter or underscore (function-like token)
        if (start <= end && (isalpha((unsigned char)f[start]) || f[start] == '_')) {
            int len = end - start + 1;
            if (len > 0 && len < 32) {
                char name[32];
                memcpy(name, &f[start], len);
                name[len] = '\0';

                // Check if already printed
                int exists = 0;
                for (int k = 0; k < printedCount; k++) {
                    if (strcmp(printedNames[k], name) == 0) { exists = 1; break; }
                }
                if (!exists) {
                    printf("Function used: %s()\n", name);
                    strcpy(printedNames[printedCount++], name);
                }
            }
        }

        // Enter a new level of nesting
        depth++;
        if (depth > *maxDepth) *maxDepth = depth;

        // Continue recursion
        checkBrackets(f, pos + 1, depth, maxDepth, isBalanced);

    } else if (ch == ')') {
        // A closing bracket without a matching '('
        if (depth == 0) {
            *isBalanced = 0;
            return;
        }
        // Leave one level of nesting
        depth--;
        checkBrackets(f, pos + 1, depth, maxDepth, isBalanced);

    } else {
        // Any other character—just move on
        checkBrackets(f, pos + 1, depth, maxDepth, isBalanced);
    }
}
