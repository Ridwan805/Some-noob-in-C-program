#include <stdio.h>

int main(){
    for (int i = 24; i >= -6; i -= 6){
        if (i == -6){
            printf("%d",i);
        }

        else{
            printf("%d, ", i);
        }
    }
    return 0;
}