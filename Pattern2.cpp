/* 
     *
    **
   ***
   .....
*/
#include <stdio.h>
int main() {
    int n, col,space;
    printf("Number of row:");
    scanf("%d", &n);
    for (int row = 1;row <=n;row++) {
        for(int space=n-1;space>0;space--){
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}