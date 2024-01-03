#include <stdio.h>

int main(){
    int count = 0,t= 2, num;
    
    printf("Enter: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        if (num%i == 0){
            count += 1;
        }
    }
    if (count == t){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}