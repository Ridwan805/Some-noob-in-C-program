#include <stdio.h>

int main() {

    int x; 
    printf("Enter: ");
    scanf("%d", &x);

    if ((-1 < x) && (x < 24)){

        if ((3 < x) && (x <= 6)){
            printf("Breakfast");
        }

        else if ((12 <= x) && (x <= 13)){
            printf("Lunch");
        }

        else if ((16 <= x) && ( x <= 17)){
            printf("Snacks");
        }

        else if ((19 <= x) && (20 >= x)){
            printf("Dinner"); 
        }

        else{
            printf("Patience is a virtue");
        }   
    }

    else {
        printf("Wrong time");
    }
}