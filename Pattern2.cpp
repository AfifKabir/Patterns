
#include <stdio.h>
int main() {

    int n;
    printf("N:");
    scanf("%d", &n);
/*
***
**
*
.....
*/
    for (int row = n;row>0;row--) {
        for(int col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
/* 
333
22
1
*/
for (int row = n; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",row);
        }
        printf("\n");
    }
/*
123
12
1
*/
for (int row = n; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col);
        }
        printf("\n");
    }
/*
ABC
AB
A
*/
for (int row = n; row > 0; row--) {
    for (int col = 1; col <= row; col++) {
        printf("%c",col+64);
    }
    printf("\n");
}
/*
CCC
BB
A
*/
for (int row = n; row > 0; row--) {
    for (int col = 1; col <= row; col++) {
        printf("%c",row+64);
    }
    printf("\n");
 }
/*
###
##
#
*/
 for (int row = n; row > 0; row--) {
     for (int col = 1; col <= row; col++) {
         printf("#");
     }
     printf("\n");
 }
}