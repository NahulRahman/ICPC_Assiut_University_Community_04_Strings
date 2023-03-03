/*Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.
    i/p: Egyptian collegiate programming\ contest
    o/p: Egyptian collegiate programming */
#include <stdio.h>
#define MAX 1000000
int main() {
    char str[MAX];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\\') {
            break;
        }
        printf("%c", str[i]);
    }

    return 0;
}

