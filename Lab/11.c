#include <stdio.h>
#include <string.h>

void con(char str1[], char str2[], char str3[]) {
    int i, j, len1 = 0, len2 = 0;

    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    
    for (i = 0; i < len1; i++) {
        str3[i] = str1[i];
    }

   
    for (j = 0; j < len2; j++) {
        str3[len1 + j] = str2[j];
    }

    
    str3[len1 + len2] = '\0';

    
    printf("\nConcatenated string: %s", str3);
    printf("\nLength of concatenated string: %d\n", strlen(str3));
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    
    printf("\nOriginal string 1: %s", str1);
    printf("\nOriginal string 2: %s", str2);

    con(str1, str2, str3);

    return 0;
}
