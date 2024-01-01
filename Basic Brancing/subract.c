#include <stdio.h>

int main() {

    int x,y,sub;
    printf("Enter:");
    scanf("%d",&x);

    printf("Enter:");
    scanf("%d",&y);
    

    if (x > y){

        sub = x - y;
    }

    else {

        sub = y - x;
    }
    

    printf("%d", sub);

    }