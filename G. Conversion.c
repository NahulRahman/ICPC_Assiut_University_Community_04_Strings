/* Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
        i/p: happy,NewYear,enjoy
        o/p: HAPPY nEWyEAR ENJOY */

#include<stdio.h>
#include<string.h>
#define MAX 100000
int main(){
    char s[MAX];
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
        else s[i]=' ';
    }printf("%s\n",s);
    return 0;
}
