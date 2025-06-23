#include<stdio.h>

void word(char str1[]) {
    int i, word = 0;

    for(i = 0; str1[i] != '\0'; i++) {
        if ((str1[i] != ' ' && (i == 0 || str1[i - 1] == ' '))) {
            word++;
        }
    }

    printf("\nNumber of words = %d", word);
}

int main() {
    char str1[100];
    printf("\nEnter the string: ");
    fgets(str1, sizeof(str1), stdin);
    word(str1);
    return 0;
}
