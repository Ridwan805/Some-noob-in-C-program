#include <stdio.h>

int main(){
    int n,count = 0;
    
    printf("Enter: ");
    scanf("%d", &n);
    
    while (n != 0){
        n = n / 10;
        count += 1;
    }

    printf("%d", count);
    return 0;
}