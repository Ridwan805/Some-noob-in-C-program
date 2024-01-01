#include <stdio.h>

int main() {

    double mark;

    printf("Enter: ");
    scanf("%lf", &mark);

    if ((0 <= mark) && (mark <= 100)){

        if (mark < 50 ){
            printf("F");
        }
        
        else if(mark < 59){
            printf("E");
        }

        else if(mark < 69){
            printf("D");
        }

        else if(mark < 79){
            printf("C");
        }

        else if (mark < 89){
            printf("B");
        }

        else{
            printf("A");
        }
    }
}