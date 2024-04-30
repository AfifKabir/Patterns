#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
    /* X star pattern
    *    *
     *  *
      *
     *  *
    *    *
    */
   for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
        if(row==col || row+col==n+1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
   }

}