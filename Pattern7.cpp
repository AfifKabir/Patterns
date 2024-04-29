#include<stdio.h>
int main(){
    int n;
    printf("N:");
    scanf("%d",&n);
/*
1
246
369
......
*/
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            printf("%d ",row*col);
        }
        printf("\n");
    }
}