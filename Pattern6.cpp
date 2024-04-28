#include<stdio.h>
int main(){
    /*
    *****
    *****
    *****
    *****
    .....
    */
   int r,c;
   printf("ROW:");
   scanf("%d",&r);
   printf("COL:");
   scanf("%d",&c);
   for(int row=1;row<=r;row++){
    for(int col=1;col<=c;col++){
        printf("*");
    }
    printf("\n");
   }
}