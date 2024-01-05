#include <stdio.h>
#include <string.h>

int main(){
    char word[10000];
    

    printf("Enter the word: ");
    scanf("%[^\n]",word);

    char *x = strtok(word, ", ");
    char *y = strtok(0, ", ");

    int len1 = strlen(x), len2 = strlen(y);

    char new[1000];

    if (len1 == len2){
        for (int i = 0; i < len1;i++){
            char n = x[i],m = y[i];
            strncat(new,&n,1);
            strncat(new,&m,1);
        }
    }

    else if (len1 < len2){
        for (int i = 0; i < len1; i++){
          char n = x[i],m = y[i];
           strncat(new,&n,1);
           strncat(new,&m,1);
        } 
        for (int j = len2 - len1 + 1; j < len2; j++){
            char z = y[j];
            strncat(new,&z,1);
        }
    }

    else{
        for (int i = 0; i < len2; i++){
          char n = x[i],m = y[i];
           strncat(new,&n,1);
           strncat(new,&m,1);
        } 
        for (int j = len1 - len2 + 1; j < len1; j++){
            char z = x[j];
            strncat(new,&z,1);
        }
    }

    printf("%s", new);

    return 0;
    
}