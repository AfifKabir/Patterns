#include<stdio.h>
int main(){
    int n;
    printf("Number of rows:");
    scanf("%d",&n);
    /*
    ****     ****
   ******   ******
  ******** ********
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *
    */
   for(int row=0;row<=2;row++){
    for(int col=1;col<=17;col++){
        if((col>=3-row && col<=6+row)|| (col>=12-row && col<=15+row)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
   }
   for(int row=9;row>0;row--){
    for(int space=1;space<=9-row;space++){
        printf(" ");
    }
    for(int col=1;col<=row;col++){
        printf("*");
    }
    for(int col=row-1;col>0;col--){
        printf("*");
    }
    printf("\n");
   }

}