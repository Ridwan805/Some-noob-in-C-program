#include <stdio.h>
#include <string.h>
int main () {
   char word[1000];

   printf("Enter the word: ");
   scanf("%[^\n]", &word);
   
   char copy[1000] = "" ;
   int len = strlen(word);

   for (int i = 0; word[i] != '\0';i++){
        int ascii = (int)word[i];
        
        if (ascii == (int)'z'){
            strcat(copy, "a");
        }
        else{
            char c = (char)(ascii +1);
            strncat(copy, &c, 1);
        }
   }
   printf("%s", copy);
   return 0;
}