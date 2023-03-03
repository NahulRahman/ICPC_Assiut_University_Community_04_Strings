/*Given two strings X and Y . Print the smallest lexicographical one.
        i/p: acm
             acpc
        O/P: acm*/
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
    char X[MAX],Y[MAX];
    gets(X);
    gets(Y);
    if(strcmp(X,Y)<0) printf("%s\n",X);
    else printf("%s\n",Y);
    return 0;
}
