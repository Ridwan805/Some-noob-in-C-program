#include <stdio.h>

void even_checker(int n){
    if (n%2 == 0){
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);
    }
}

int main(){
    int x;

    printf("Enter: ");
    scanf("%d", &x);
    even_checker(x);

    return 0;
}