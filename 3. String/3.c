#include <stdio.h>
#include <string.h>

int main(){
    char ch[100];
    int count = 0, i,len;
     
    printf("Enter the string: "); 
    scanf("%[^\n]", &ch);
    len = strlen(ch);

    for (i = 0; i < len; i++){
        if ((ch[i] == '0') || (ch[i] == '1')){
            count += 1;
        }
    }
    if (count == len){
        printf("Binary Number");
    }
    else{
        printf("Not a Binary Number");
    }
    return 0;
}