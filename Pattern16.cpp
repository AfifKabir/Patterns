#include <stdio.h>
int main() {
    int n;
    printf("N:");
    scanf("%d", &n);
    /*
    1
   121
  12321
 1234321
 ........
    */
    for (int row = 1; row <= n; row++) {
        for(int space=1;space<=n-row;space++){
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        }
        for(int col=row-1;col>0;col--){
            printf("%d",col);
        }
        printf("\n");
    }
    printf("\n");
/*
.....
12321
 121
  1
*/
    for(int row=n;row>0;row--){
        for(int space=n-row;space>0;space--){
            printf(" ");
        }
        for(int col=1;col<=row;col++){
            printf("%d",col);
        }
        for(int col=row-1;col>0;col--){
            printf("%d",col);
        }
        printf("\n");
    }
    printf("\n");
    /*
   1
  121
 12321
1234321
.......
 12321
  121
   1
*/
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        }
        for (int col = row - 1; col > 0; col--) {
            printf("%d", col);
        }
        printf("\n");
    }
    for (int row = n-1; row > 0; row--) {
        for (int space = n - row; space > 0; space--) {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        }
        for (int col = row - 1; col > 0; col--) {
            printf("%d", col);
        }
        printf("\n");
    }
}