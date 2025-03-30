// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int d=a+64;
        char ch=(char)d;
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            a++;
        }
       
        
        printf("\n");
    }
}