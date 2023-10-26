#include<stdio.h>

 void swap(int *a,int *b){

int temp;



temp=a;
a=b;
b=temp;

return;

}

int main(int *a,int *b){


printf("\nEnter value of a : ");
scanf("%d",&a);

printf("\nEnter value of b : ");
scanf("%d",&b);



swap(*a,*b);

printf("\n\n______AFTER SWAPPING______");

printf("\nValue of a : ",*a);

printf("\nValue of b : ",*b);

}





