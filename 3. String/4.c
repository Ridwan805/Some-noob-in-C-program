#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    
    int len = strlen(s);
    char er[1000], est[1000], copy[100];
    int c = 0;

    for (int i = len- 3; i < len; i++){
        est[c] = s[i] ;
        c += 1;
    }

    c = 0;

    for (int i = len- 2; i < len; i++){
        er[c] = s[i] ;
        c += 1;
    }

    if (strcmp(est, "est")==0){
        printf("%s", s);
    }
    
    else if (strcmp(er, "er")==0){
        strncpy(copy,s,len-2); 
        copy[len - 2] = '\0';
        printf("%s%c%c%c",copy,'e','s','t');
    }
    else if (len > 3){
        printf("%s%c%c",s,'e','r');
    }
    else{
        printf("%s", s);
    }
    return 0;

}

// check strcpy and strncpy here https://github.com/Ridwan805/some-string-functions-in-c