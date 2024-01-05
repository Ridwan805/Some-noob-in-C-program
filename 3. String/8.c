#include <stdio.h>
#include <string.h>

int main (){
    char word[1000];
    printf("Enter the word: ");
    scanf("%s", &word);

    int len = strlen(word);
    char copy[1000] = "";
    for (int i = 0; i < len; i++){
       if (i%2 != 0 ){
        int a = (int)word[i];
          if ((65 <= a) && (a <= 90)){
            char c = word[i];
            strncat(copy, &c,1);
            
          }

          else{
            int ascii = (int)(word[i]) - 32;
            char c = (char)ascii;
            strncat(copy, &c, 1);
          }

       }
    }
    printf("%s", copy);

    return 0;
}

