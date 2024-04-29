#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
/*
  .....
  * * * *
   * * *
    * *
     *
*/
    for (int row = n; row >0; row--) {
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
}
