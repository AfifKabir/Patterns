#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
    /*
    *
   **
  ***
  ....
   **
    *
     
    */
   for(int row=1;row<=n;row++){
    for(int space=n-row;space>0;space--){
        printf(" ");
    }
    for(int col=1;col<=row;col++){
        printf("$");
    }
    printf("\n");
   }
   for(int row=n-1;row>0;row--){
    for(int space=n-row;space>0;space--){
        printf(" ");
    }
    for(int col=1;col<=row;col++){
        printf("$");
    }
    printf("\n");
   }
}