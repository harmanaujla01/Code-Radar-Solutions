// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d*2",&n);
    
    int nsp=n;
    int nst=1;
    
    for(int i=1;i<=2*n-1;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(i<n){
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