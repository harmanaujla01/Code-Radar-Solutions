// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=1;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(n<ml){
            nsp--;
            nst+=i;
        }
        else{
            nsp++;
            nst-=i;
        }
        printf("\n");
    }
    return 0;
}