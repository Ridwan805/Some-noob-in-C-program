#include <stdio.h>
#include <math.h>
#include <limits.h>


int main(){
    int n,num;
    double sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    printf("Enter r: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter: ");
        scanf("%d", &num);
        if (max < num){
            max = num;
        }

        if( min > num){
            min = num; 
        }
        sum += num;
    }

    
    double avg = sum / n;
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n", min);
    printf("Average is %0.2lf", avg);

    return 0;
}