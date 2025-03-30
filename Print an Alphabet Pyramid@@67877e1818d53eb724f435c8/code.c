// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ch='A'+j-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
}