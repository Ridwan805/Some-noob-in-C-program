#include <stdio.h>
#include <string.h>

void upperlower(char s[100]){

    int len = strlen(s);

    int up = 0, low = 0;

    for (int i = 0; i< len; i++){
        if (65 <= (int)s[i] && (int)s[i] <= 90){
            up += 1;
        }
        else if (97 <= (int)s[i] && (int)s[i]<=122 ){
            low += 1;
        }
    }

    printf("No of uppercase letter is %d",up);
    printf("\n");
    printf("No of lowercase letter is %d",low);

}

int main(){
    char sen[1000];
    printf("Enter the string: ");
    scanf("%[^\n]", &sen);
    upperlower(sen);
    return 0;
}