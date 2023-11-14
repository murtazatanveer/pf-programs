#include<stdio.h>

void swap ();
int main(){
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);

    printf("\n\nBefore Swapping\n\n a : %d and b : %d",a,b);

    swap(a,b);


    return 0;
}



void swap(int a, int b){

    int temp;

  
    printf("\n\nAfter Swapping\n\n");

    temp=a;
    a=b;
    b=temp;

   printf("a : %d and b : %d",a,b);


   
}








