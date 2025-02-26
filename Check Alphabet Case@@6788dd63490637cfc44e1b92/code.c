// Your code here...
#include<stdio.h>
int main(){
    char a;
    if('a'<=a<='z'){
        printf("Lowercase");
    }
    else if('A'<=a<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}