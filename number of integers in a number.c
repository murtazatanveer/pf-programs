#include<stdio.h>
int main(){

int digit,counter=0;
int number;
printf("\n\nEnter Number : ");
scanf("%d",&number);

while(number>0){

    digit=number%10;
    number =number/10;
    counter++;
}
printf("\n\nthe number of integers in %d is %d",number,counter);


}