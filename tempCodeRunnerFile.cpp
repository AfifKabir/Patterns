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