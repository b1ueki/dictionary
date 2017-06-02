#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 256

FILE *fp;

static char pass[64];
static char word[64];

int main(){

  fp = fopen("words","r");
  printf("please input password > ");
  scanf("%s", pass);

  while(fgets(word, N, fp) != NULL){
    printf("%s\n", word);
    word[strlen(word) - 1] = '\0';
    if(!strcmp(word, pass)){
      printf("----------------\n");
      printf("pass is [%s]\n", word);
      printf("----------------\n");
      exit(1);
    }
  }

  return 0;
}
