#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[1000];

    printf("Enter the number:");
    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = '\0';

    int num = atoi(n);
    int len = strlen(n);

    for (int i = (len - 1); i >= 0; i--){
        int dig = num % 10;
        if (i == 0){
            printf("%d", dig);
        }
        else{
          printf("%d, ", dig);  
        }
        num =num / 10;
    }
    return 0;
     
    


}