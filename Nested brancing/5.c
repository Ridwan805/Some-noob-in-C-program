#include <stdio.h>

int main(){
    int cred;
    double cg; 

    printf("Enter CG: ");
    scanf("%lf", &cg);

    printf("Credit: ");
    scanf("%d", &cred);

    if (cred >= 30 ){
        if((3.80 <= cg) && (cg <= 3.89)){
            printf("The student is eligible for a waiver of 25 percent.");
        }

        else if ((3.90 <= cg) && (3.94 >= cg)){
            printf("The student is eligible for a waiver of 50 percent.");
        }

        else if ((3.95 <= cg) && (3.99 >= cg)){
            printf("The student is eligible for a waiver of 75 percent.");
        }

        else if (cg == 4){
            printf("The student is eligible for a waiver of 100 percent.");
        }

        else if ((0 <= cg) && (cg <= 3.79)){
            printf("The student is not eligible for a waiver");
        }
    }

    else{
        printf("The student is not eligible for a waiver");
    }
    



}