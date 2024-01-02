#include <stdio.h>

int main(){
    double count = 0, sum = 0; 
    int inp;

    for (int i = 1; i <= 10; i++){
        printf("Enter: ");
        scanf("%d", &inp);
        if (inp % 2 != 0){
            sum += inp;
            count += 1;
        }
    }
    double avg ;
    avg =   sum / count;

    printf("%0.2lf", avg);
    return 0;
}