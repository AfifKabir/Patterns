/* 
*
**
***
....
*/
#include<stdio.h>
int main(){
  int n,col;
  printf("N:");
  scanf("%d",&n);
  for(int row=0;row<n;row++){
    for(int col=0;col<=row;col++){
        printf("*");
    }
    printf("\n");

  }
/*
1
22
333
....
*/
for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",row);
        }
        printf("\n");
    }

/*
1
12
123
....
*/
 for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col);
        }
        printf("\n");
    }
/*
1
10
101
....
*/
 for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d",col%2);
        }
        printf("\n");
    }
/*
1
00
111
....
*/
 for (int row = 1; row <= n; row++) {
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
*/
 for (int row = 1; row <= n; row++) {
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
*/
for (int row = 1; row <= n; row++) {
     for (int col = 1; col <= row; col++) {
        printf("%c", row + 64);
         }
         printf("\n");
        }
}
