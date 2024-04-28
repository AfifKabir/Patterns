#include<stdio.h>
int main(){
    int n;
    printf("N:");
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