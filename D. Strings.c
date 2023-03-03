/* Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A+B).
The two strings separated by a single space respectively, after swapping their first character.*/

#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
    char A[MAX],B[MAX];
    gets(A);
    gets(B);
    printf("%d %d\n",strlen(A),strlen(B));
    printf("%s%s\n",A,B);
    char temp;

    temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s %s\n", A, B);
    return 0;
}
