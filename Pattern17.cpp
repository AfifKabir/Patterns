#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
    /*
    *
    **
    ****
    ********
    .......
    */
   for(int row=0;row<n;row++){
    for(int col=1;col<=pow(2,row);col++){
        printf("*");
    }
    printf("\n");
   }
}