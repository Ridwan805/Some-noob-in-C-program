#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    char n[10000]; 

    printf("Enter the number:");
    fgets(n, sizeof(n), stdin);// this is used for the string inputs
    n[strcspn(n, "\n")] = '\0';

    x = atoi(n);
    int len = strlen(n);

    int div = pow(10,(len-1));

    for (int i = len-1; i >= 0; i--){
        int dig = x/div;
        
        if (i == 0){
        printf("%d", dig);
        }
        else{
          printf("%d, ", dig);  
        }
        x = x%div;
        div = div/10;
    
    }
    return 0;

}