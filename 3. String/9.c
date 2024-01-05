#include <stdio.h>
#include <string.h>

int main(){
    char word[1000];
    
    printf("Enter the word: ");
    scanf("%[^\n]", &word);

    int len = strlen(word);
    char copy[1000] = "";

    for (int i = 0;i < len;i++){
        if ((copy == "") || (word[i] != copy[strlen(copy)-1])){
            char c = word[i];
            strncat(copy,&c,1);
        }
    }
    printf("%s",copy);

    return 0;
}