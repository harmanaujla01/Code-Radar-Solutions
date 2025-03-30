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
            nsp = n - i;      // For upper part
            nst = 2 * i - 1;   // For upper part
        } else {
            nsp = i - n;      // For lower part
            nst = 2 * (2 * n - i) - 1;  // For lower part
        }
        printf("\n");
    }
    return 0;
}