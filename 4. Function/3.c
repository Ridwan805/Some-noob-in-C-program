#include <stdio.h>
#include <string.h>

char *foo_moo(int n){
    char *s = "";
    if (n%2 == 0 && n%3 == 0){
        s = "FooMoo";
    }
    else if (n%3 == 0){
        s = "Moo";
    }
    else if (n%2 == 0){
        s = "Foo";
    }
    else{
        s = "Boo";
    }
    return s;
}

int main(){
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    char *c = foo_moo(x);
    printf("%s",c);
    return 0;
}