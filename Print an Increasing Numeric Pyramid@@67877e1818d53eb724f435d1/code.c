// Your code here...
#include<stdio.h>
int main(){
    int n;
    int nst;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;

        }
        nst=nst+2;
        printf("\n");
    }
}