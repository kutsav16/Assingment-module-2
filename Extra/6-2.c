#include <stdio.h>

void vowel(char ch[]) {
    int i, j = 0, k = 0;
    int vowel = 0, consonant = 0;
    char ch2[100], ch3[100];

    for (i = 0; ch[i] != '\0'; i++) {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')) {
            if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||
                ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U') {
                ch2[j++] = ch[i];
                vowel++;
            } else {
                ch3[k++] = ch[i];
                consonant++;
            }
        }
    }

    ch2[j] = '\0';
    ch3[k] = '\0';

    printf("\nVowel count = %d", vowel);
    printf("\nConsonant count = %d", consonant);
    printf("\nVowel string = %s", ch2);
    printf("\nConsonant string = %s", ch3);
}

int main() {
    char str1[100];
    printf("\nEnter a string: ");
    fgets(str1, sizeof(str1), stdin); 
    vowel(str1);
    return 0;
}
