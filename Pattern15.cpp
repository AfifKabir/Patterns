#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
    /* FLOYD'S triangle pattern
    1
    2 3
    4 5 6
    7 8 9 10
    ........
    */
   int count=1;

   for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
        printf("%d ",count);
        count++;
         }
    printf("\n");
   }

}