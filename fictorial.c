#include<stdio.h>
int fictorial(int number);
int main(){

int number;

printf("\nEnter number : ");
scanf("%d",&number);

printf("\n\nFictorial : %d",fictorial(number));


}


int fictorial(int number){




int fact =1;

for(int i=1;i<=number;i++){

fact=fact*i;


}
return fact;

}