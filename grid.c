#include<stdio.h>
int main(){

int num;
printf("Enter nuber you want to find grid : ");
scanf("%d",&num);
printf("\n\n");

for(int i=0; i<=num;i++){
    for(int j=0;j<=num;j++){

     printf("(%d , %d)   ",i,j);    

    }

    printf("\n\n");

}

}