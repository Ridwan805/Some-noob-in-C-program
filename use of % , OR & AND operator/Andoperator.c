#include <stdio.h>

int main() {

    int x;
    printf("Enter: ");
    scanf("%d",&x);

    if (((x % 2) == 0) && ((x % 5) == 0)){

        printf("Multiple of 2 and 5 both");

    }

    else if ((x % 2) == 0){

        printf("%d", x);

    }

    else if ((x % 5) == 0){

       printf("%d", x);
    }

    else{
       
       printf("Not a multiple we want");


    }

    return 0;
}