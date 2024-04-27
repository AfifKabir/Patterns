#include<stdio.h>
int main(){
    int count;
    printf("Numbers of fibonacci:");
    scanf("%d",&count);
    int fibo1=0,fibo2=1;
    int fibo;
    for(int i=0;i<count;i++){
        if(i<2){
            fibo=i;
            printf("%d\n",fibo);
        }
        else{
            fibo=fibo1+fibo2;
            fibo1=fibo2;
            fibo2=fibo;
            printf("%d\n",fibo);
        }
    }
    return 0;
}