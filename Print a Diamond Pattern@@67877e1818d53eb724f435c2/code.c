// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int nsp=n;
    int nst=1;
    
    for(int i=1;i<=2*n-1;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(i <= n) {
            spaces = n - i;      // For upper part
            stars = 2 * i - 1;   // For upper part
        } else {
            spaces = i - n;      // For lower part
            stars = 2 * (2 * n - i) - 1;  // For lower part
        }
        printf("\n");
    }
    return 0;
}