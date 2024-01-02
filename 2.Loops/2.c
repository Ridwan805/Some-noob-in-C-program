#include <stdio.h>

int main(){
    char name[20];
    int hd;

    printf("Car: ");
    scanf("%s", &name);

    printf("Number: ");
    scanf("%d",&hd);

    for (int i = 1; i <= hd; i++){
        printf("%s\n",name);
    }
    return 0;
}