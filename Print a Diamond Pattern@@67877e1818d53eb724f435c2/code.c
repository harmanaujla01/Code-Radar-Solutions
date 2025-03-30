// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int g=n/2;
    int nsp=g/2;
    int nst=1;
    int ml=(g/2)+1;
    for(int i=1;i<=g;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}