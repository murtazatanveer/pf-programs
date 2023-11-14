
#include<stdio.h>
int sum();
int main(){

int x,y;
printf("\n\nsum : %d",sum( x,y));

}

int sum(int a, int b){


printf("\nEnter 1st number : ");
scanf("%d",&a);
 
printf("\nEnter 2nd number : ");
scanf("%d",&b);

int s=a+b;

return s;

}