// Your code here...
#include<stdio.h>
void fibonacci(int n){
    
    int a=0;
    int b=1;
    int next;
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d ",a);
        }
        else if(i==2){
            printf("%d ",b);
        }
        else{
            next=a+b;
            printf("%d ",next);
            a=b;
            b=next;
            
        }

        
        
    }
}
