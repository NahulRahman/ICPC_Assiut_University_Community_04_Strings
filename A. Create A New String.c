/*  Given two strings S and T. Print 2 lines that contain the following in the same order:
        i/p: LEVEL
             ONE
        o/p: 5 3
             LEVEL ONE */
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
    char S[MAX],T[MAX];
    gets(S);
    gets(T);
    printf("%d %d\n",strlen(S),strlen(T));
    printf("%s %s",S,T);
    return 0;
}
