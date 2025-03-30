// // Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int nsp=1;nsp<=n-i;nsp++){
            printf(" ");
        }
        for(int nst=1;nst<=2*-1;nst++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int nsp=1;nsp<n-i;nsp++){
            printf(" ");

        }
        for(int nst=1;nst<=2*i-1;nst++){
            printf("*");
        }
        printf("\n");
    }
}