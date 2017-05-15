#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 256

FILE *fp;

char pass[];
char word[];

int main(){

  fp = fopen("lower","r");
  printf("input pass > ");
  scanf("%s", pass);

  while(fgets(word, N, fp) != NULL){
//    printf("%s\n", word);
//    printf("%d\n",strlen(word));
    if(!strcmp(word, pass)){
      printf("pass is [%s]\n", word);
      exit(1);
    }
  //  memset(word, 0, strlen(word));
  }

  return 0;
}
