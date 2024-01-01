#include <stdio.h>

int main() {

    int dis, time;
    double speed;

    printf("Distance: ");
    scanf("%d", &dis);
    
    printf("Time: ");
    scanf("%d", &time);

    speed = (dis/1000) / (time/3600);

    if (speed < 60){
      printf("%0.1lf\nToo slow. Needs more changes.",speed);
    }

    else if ((speed >= 60) && (speed <= 90)){
        printf("%0.1lf\nVelocity is okay. The car is ready!",speed);
    }

    else{
        printf("%0.1lf\nToo fast. Only a few changes should suffice.",speed);
    }

    return 0;

}