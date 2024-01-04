#include <stdio.h>
#include <string.h>

int main (){
    char word[1000];

    printf("Enter the word: ");
    scanf("%s", &word);

    int len = strlen(word);

    for(int i = 0;i < len; i++){
        for (int j = 0; j <= i; j++){
            printf("%c", word[j]);
        }
        printf("\n");

    }
    return 0;
}