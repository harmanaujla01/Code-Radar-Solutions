#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[12],b[12];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}