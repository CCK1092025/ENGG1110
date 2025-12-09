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
* Class/Section: ENGG1110B
* Date         : 20/11/2025
*/

/* include header file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DO NOT change the struct
typedef struct _article{
  char title[100], author[100], journal[100];
  int year;
} Article;

Article create_article(char title[100], char author[100], char journal[100], int year) {
  // create a new article based on the parameters
  // remember to return the article
  Article new_article;
  strcpy(new_article.title,title);
  strcpy(new_article.author,author);
  strcpy(new_article.journal,journal);
  new_article.year = year;
  return new_article;
}


// Example format:
// Title   : Problem Solving by Programming
// Author  : ENGG1110 Team
// Journal : Programming Journal
// Year    : 2020
void print_format_full(Article article){
  // print the article based on the above format
    printf("Title   : %s\n", article.title);
    printf("Author  : %s\n", article.author);
    printf("Journal : %s\n", article.journal);
    printf("Year    : %d\n", article.year);
}


// Example format:
// ENGG1110 Team. Problem Solving by Programming. Programming Journal (2020).
void print_format_simplified(Article article){
  // print the article based on the above format
  printf("%s. %s. %s (%d).\n",article.author,article.title,article.journal,article.year);
}


int main(void){
  Article article;
  char title[100], author[100], journal[100];
  int year;
  //Insert your code here
  //Read in the title, author, and journal
  fgets(title,sizeof(title),stdin);
  title[strcspn(title, "\n")] = '\0';
  fgets(author,sizeof(author),stdin);
  author[strcspn(author, "\n")] = '\0';
  fgets(journal,sizeof(journal),stdin);
  journal[strcspn(journal, "\n")] = '\0';
  scanf("%d", &year);


  
  // Do not modify the following
  article = create_article(title, author, journal, year);

  print_format_full(article);
  print_format_simplified(article);
  return 0;
}