#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
/*
#
##
###
.....
##
#
*/
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            printf("#");
        }
        printf("\n");
    }
    for(int row=n-1;row>0;row--){
        for(int col=1;col<=row;col++){
            printf("#");
        }
        printf("\n");
    }
/*
1
12
123
......
12
1
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col);
        }
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col);
        }
        printf("\n");
    }
/*
1
22
333
....
22
1
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
             printf("%d",row);
        }   
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",row);
        }
        printf("\n");
    }
/*
1
10
101
......
10
1
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col%2);
        }
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col%2);
        }
        printf("\n");
    }
/*
1
00
111
.....
00
1
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",row%2);
        }
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%d",row%2);
        }
        printf("\n");
    }
/*
A
AB
ABC
....
AB
A
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c",col+64);
        }
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%c",col+64);
        }
        printf("\n");
    }
/*
A
BB
CCC
....
BB
A
*/
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c",row+64);
        }
        printf("\n");
    }
    for (int row = n - 1; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            printf("%c",row+64);
        }
        printf("\n");
    }
}