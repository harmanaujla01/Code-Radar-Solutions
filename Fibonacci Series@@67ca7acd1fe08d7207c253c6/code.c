// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;a=1;next;
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d",a);
        }
        else if(i==2){
            printf("%d",b);
        }
        else{
            next=a+b;
            printf("%d",next);
            a=b;
            b=next;
            
        }

        printf("\n");
        return 0;
    }
}