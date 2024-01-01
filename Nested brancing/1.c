#include <stdio.h>

int main(){

    int x,re;
    printf("Enter: ");
    scanf("%d", &x);

    if ((0 <= x) && (x <= 168)){
        if ((0 <= x) && (x <= 40)){
         
        re = x*200;
        printf("%d",re);

        }

        else if (168 >= x){

            re = 8000 + (x - 40)*300;
            printf("%d",re);
        }

    }
    
    else if (0 > x){

        printf("Hours can't be negative");

    }

    else if (168 < x){

        printf("Impossible to work more than 168 hours");

    }
    return 0;
}