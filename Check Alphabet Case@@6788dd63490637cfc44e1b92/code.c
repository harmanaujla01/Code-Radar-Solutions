// Your code here...
#include<stdio.h>
int main(){
    char a;
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else if(a>='A' && a<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}