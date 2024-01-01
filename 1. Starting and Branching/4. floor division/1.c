#include <stdio.h>

int main() {

    int num;
    int hour, minutes, seconds;

    printf("Enter: ");
    scanf("%d", &num);
    
    hour = num / 3600;

    int rem = num % 3600;

    minutes = rem / 60;

    seconds = rem % 60;

    printf("Hours: %d Minutes: %d Seconds: %d", hour,minutes,seconds);

    return 0;
}