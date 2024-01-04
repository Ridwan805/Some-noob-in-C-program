#include <stdio.h>
#include <string.h>
int main() {

    char word[1000];
    
    printf("Enter the word: ");
    scanf("%[^\n]", &word);

    int len = strlen(word);

    for (int i = 0; i < len; i++){
        printf("%c:%d\n",word[i], (int)word[i]);
    }

    return 0;
}