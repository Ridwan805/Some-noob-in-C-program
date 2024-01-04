#include <stdio.h>
#include <string.h>

int main (){
    char st[100];
     printf("Enter the string: ");
     scanf("%s", st);

     int ind;
     printf("Enter the Index: ");
     scanf("%d", &ind);

     for (int i = 0; i < ind; i++){
        printf("%c", st[i]);
     }
     int len = strlen(st);
     for (int i = len-1; i >= ind; i-- ){
        printf("%c", st[i]);
     }
     return 0;
}