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
*http://www.cuhk.edu.hk/policy/academichonesty/
*
* Student Name : Chan Cheuk Kin
* Student ID   : 1155257970
* Class/Section: ENGG1110B
* Date         : 25/9/2025
*/
#include <stdio.h>


#include <stdio.h>

int main(void)
{
    int countvote[3] = {0}; 
    int vote, i;

    // Read 10 votes
    for (i = 0; i < 10; i++) {
        scanf("%d", &vote);
        countvote[vote - 1]++;
    }

    // Find the maximum vote count
    int maxVote = countvote[0];
    for (i = 1; i < 3; i++) {
        if (countvote[i] > maxVote) {
            maxVote = countvote[i];
        }
    }

    // Count how many candidates have the maximum vote
    int tieCount = 0;
    for (i = 0; i < 3; i++) {
        if (countvote[i] == maxVote) {
            tieCount++;
        }
    }

    // Output result
    if (tieCount > 1) {
        printf("We cannot decide our committee chairman in this vote.\n");
    } else {
        for (i = 0; i < 3; i++) {
            if (countvote[i] == maxVote) {
                printf("Congratulations! Candidate %d is the next committee chairman.\n", i + 1);
                break;
            }
        }
    }

    return 0;
}
