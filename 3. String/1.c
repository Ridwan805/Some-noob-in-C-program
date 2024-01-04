#include <stdio.h>
#include <string.h>

int main(){
    char st[100];
    printf("Enter the string: ");
    scanf("%s",st);
    
    int len = strlen(st);
    for (int i = len - 1; i >= 0; i--){
       printf("%c", st[i]);
    } 
    return 0;
}